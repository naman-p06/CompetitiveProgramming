#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
// Global variables.
int n, k;
int m; // m = k/2
vector<int> a; // 1-indexed array
const int INF = 1000000000;
 
// For RMQ queries on array a.
vector<vector<int>> stMinTab, stMaxTab;
vector<int> logVal;
 
// Build sparse tables for a[1..n] (1-indexed).
void buildSparseTable() {
    int N = n;
    int K_log = floor(log2(N)) + 1;
    stMinTab.assign(K_log, vector<int>(N+1));
    stMaxTab.assign(K_log, vector<int>(N+1));
    for (int i = 1; i <= N; i++){
        stMinTab[0][i] = a[i];
        stMaxTab[0][i] = a[i];
    }
    for (int j = 1; j < K_log; j++){
        for (int i = 1; i + (1 << j) - 1 <= N; i++){
            stMinTab[j][i] = min(stMinTab[j-1][i], stMinTab[j-1][i + (1 << (j-1))]);
            stMaxTab[j][i] = max(stMaxTab[j-1][i], stMaxTab[j-1][i + (1 << (j-1))]);
        }
    }
    logVal.assign(N+1, 0);
    for (int i = 2; i <= N; i++){
        logVal[i] = logVal[i/2] + 1;
    }
}
 
// RMQ query on a for interval [L, R] (1-indexed).
int queryMin(int L, int R) {
    int j = logVal[R - L + 1];
    return min(stMinTab[j][L], stMinTab[j][R - (1 << j) + 1]);
}
int queryMax(int L, int R) {
    int j = logVal[R - L + 1];
    return max(stMaxTab[j][L], stMaxTab[j][R - (1 << j) + 1]);
}
 
// We'll use memoization for our DP states.
// A state is (i, L, r) meaning: for the i-th even block (i=1..m) that starts at position L in a,
// with expected next b–value r, what is the minimum final cost achievable?
struct State {
    int i, L, r;
};
 
struct StateHash {
    size_t operator()(const State &s) const {
        return ((size_t)s.i * 10000019ULL + s.L)*10000019ULL + s.r;
    }
};
 
bool operator==(const State &s1, const State &s2) {
    return s1.i==s2.i && s1.L==s2.L && s1.r==s2.r;
}
 
unordered_map<State,int,StateHash> dpMemo;
 
// DP function.
// For even block i (1-indexed), S_{2i} is forced to start at position L.
// The allowed choices for S_{2i} are to take a contiguous block from indices L to R,
// where R must satisfy R <= R_max(i) = n - (2*m - 2*i)
// (so that there remain at least (2*m - 2*i) elements for the remaining subarrays).
// Let d = R - L + 1 be the chosen block length.
// In the block, we “expect” the entries to be: r, r+1, …, r+d-1.
// If for some j (0-indexed) we have a mismatch (i.e. a[L+j] != r+j) then if we choose that R,
// the overall cost becomes r+j.
// Otherwise (if the block is “perfect”) then we must continue with the next even block,
// starting at index R+2 (since one element must go to the odd block following S_{2i}),
// and the new expected value becomes r+d. (In the final block, a perfect match means cost = r+d,
// since appending 0 yields a mismatch.)
//
// One more observation is that if in the allowed range [L, R_max(i)] there is any index where a value 
// is not equal to r, then we may choose an even block so that its very first element is that mismatching value – 
// immediately yielding cost = r. Thus in that case DP(i,L,r)= r.
 
int DP (int i, int L, int r) {
    // If the starting index is too far, partition is invalid.
    int R_max = n - (2*m - 2*i);
    if(L > R_max) return INF;
    // Base: if no even block remains, then we append 0 and the cost is r.
    if(i > m) return r;
 
    State st {i,L,r};
    if(dpMemo.find(st) != dpMemo.end())
        return dpMemo[st];
 
    // First check the entire available interval [L, R_max] in a.
    // If any element in a[L...R_max] is not equal to r then we can choose that option and immediately force cost = r.
    int mn = queryMin(L, R_max);
    int mx = queryMax(L, R_max);
    if(mn != r || mx != r){
        dpMemo[st] = r;
        return r;
    }
    // Otherwise, every element in a[L...R_max] equals r.
    // Then note that for a block starting at L the “forced–match” is as follows:
    // We check from j=0 upward whether a[L+j]== r+j.
    // But here a[L]==r; however for j>=1 we have a[L+j] = r (since the whole interval equals r)
    // and we require r+j (which is > r). Thus the forced match length is exactly 1.
    // Also the maximum block length available is M = R_max - L + 1.
    int M = R_max - L + 1;
    int d_match = 1; // forced match length at L is 1.
    int candidateBreak = INF, candidateForced = INF;
    // Option 1 (“immediate break”): if we have any slack (i.e. if we can choose a block longer than the forced prefix)
    // then by taking block length = d_match+1 we force a mismatch at the (d_match+1)th element.
    if(M > d_match)
        candidateBreak = r + d_match; // here r+1.
    // Option 2 (“forced match”): take block length exactly d_match.
    if(i < m)
        candidateForced = DP(i+1, L + d_match + 1, r + d_match);
    else
        candidateForced = r + d_match; // for the last even block.
 
    int res = min(candidateBreak, candidateForced);
    dpMemo[st] = res;
    return res;
}
 
// The overall partition consists of 2*m = k subarrays.
// S1 (the first odd block) must be nonempty. Therefore S2 (the first even block) may start at any position L 
// with L in [2, L_max] where L_max = n - (2*m - 1) + 1 = n - 2*m + 2.
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    cin >> t;
    while(t--){
        cin >> n >> k;
        m = k/2;
        a.resize(n+1);
        for (int i=1; i<=n; i++){
            cin >> a[i];
        }
 
        buildSparseTable();
        dpMemo.clear();
 
        int Lmin = 2, Lmax = n - 2*m + 2;
        int ans = INF;
        for (int L = Lmin; L <= Lmax; L++){
            ans = min(ans, DP(1, L, 1));
        }
 
        cout << ans << "\n";
    }
    return 0;
}
