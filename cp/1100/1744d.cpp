#include <bits/stdc++.h>
using namespace std;

void solve(string s, long long k,vector<pair<long long,char>>&index) {
    
    // Ensure k does not exceed the size of the index
    k = min(k, (long long)index.size());
    
    for (long long i = 0; i < k; i++) {
        long long u = index[i].first;
        char v = index[i].second;
        if (v == 'R') {
            s[s.size() - 1 - u] = 'L';
        } else {
            s[u] = 'R';
        }
    }
    
    long long ans = 0;
    for (long long i = 0; i < s.size(); i++) {
        if (s[i] == 'L') {
            ans += i;
        } else {
            ans += s.size() - 1 - i;
        }
    }
    
    cout << ans <<" ";
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        vector<pair<long long, char>> index;
    
    // Collect indexes of 'L' in the first half
    for (long long i = 0; i < s.size() / 2; i++) {
        if (s[i] == 'L') {
            index.push_back({i, 'L'});
        }
    }
    
    // Collect indexes of 'R' in the second half
    for (long long i = s.size() - 1; i >= s.size() / 2; i--) {
        if (s[i] == 'R') {
            index.push_back({s.size() - 1 - i, 'R'});
        }
    }
    
    sort(index.begin(), index.end());
    
        for (long long i = 1; i <= n; i++) {
            solve(s, i,index);
        }
        cout<<endl;
    }
    return 0;
}
