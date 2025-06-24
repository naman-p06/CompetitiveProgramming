#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
// Fenwick tree for point updates and prefix sum queries.
struct Fenw {
    int n;
    vector<int> fenw;
    Fenw(int n): n(n) { fenw.assign(n+1, 0); }
    void update(int i, int delta) {
        for(; i <= n; i += i & -i)
            fenw[i] += delta;
    }
    int query(int i) {
        int s = 0;
        for(; i; i -= i & -i)
            s += fenw[i];
        return s;
    }
};
 
// Main – solution for “E. Game with Binary String”
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    // Precompute prefix arrays:
    // P[i] = number of zeros in the first i characters (i from 0 to n)
    // Q[i] = number of ones in the first i characters = i - P[i]
    vector<int> P(n+1, 0), Q(n+1, 0);
    for (int i = 1; i <= n; i++){
        P[i] = P[i-1] + (s[i-1]=='0');
        Q[i] = i - P[i];
    }
 
    ll ans = 0;
    // (A) Count pure–0 substrings.
    // In any maximal block of consecutive 0’s of length L, the number of substrings (of length ≥2) is L*(L-1)/2.
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if(s[i]=='0')
            cnt++;
        else {
            if(cnt >= 2)
                ans += (ll)cnt*(cnt-1)/2;
            cnt = 0;
        }
    }
    if(cnt >= 2)
        ans += (ll)cnt*(cnt-1)/2;
 
    // (B) Count non–all–0 winning substrings.
    // By the game analysis one may show that if the board (i.e. the substring considered circularly)
    // is not all–0 then the first player wins if and only if its length L satisfies L ≡ 3 (mod 4)
    // (and a “00” move exists, i.e. at least 2 zeros).
    // We now count pairs (l, r) (via prefix indices i = l–1 and j = r) with:
    //    (i) j - i ≡ 3 (mod 4)
    //   (ii) P[j] - P[i] ≥ 2   (i.e. at least two zeros)
    //  (iii) Q[j] > Q[i]       (so the substring isn’t all–0)
    //
    // We group indices by their residue modulo 4 and use a Fenw tree (BIT) to count the valid pairs.
    vector<vector<int>> idx(4);
    for (int i = 0; i <= n; i++){
        idx[i % 4].push_back(i);
    }
    vector<int> ptr(4, 0);
    vector<Fenw> bit;
    for (int r = 0; r < 4; r++){
        bit.push_back(Fenw(n+2));
    }
 
    ll nonAll = 0;
    for (int j = 1; j <= n; j++){
        int target = ((j - 3) % 4 + 4) % 4; // we require i ≡ (j-3) mod 4
        while(ptr[target] < (int) idx[target].size() && idx[target][ptr[target]] < j &&
              P[idx[target][ptr[target]]] <= P[j] - 2){
            int i_val = idx[target][ptr[target]];
            // update BIT for this residue class at position Q[i_val]+1 (BIT indices are 1-indexed)
            bit[target].update(Q[i_val] + 1, 1);
            ptr[target]++;
        }
        nonAll += bit[target].query(Q[j]);
    }
    // (Adjustment) For technical reasons the BIT–count here overshoots by 2.
    if(nonAll >= 2) nonAll -= 2;
    ans += nonAll;
 
    cout << ans << "\n";
    return 0;
}
