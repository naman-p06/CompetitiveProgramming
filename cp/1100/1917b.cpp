#include <bits/stdc++.h>
using namespace std;

void solve(map<string, long long>& memo, string s) {
    if (s.empty()) return;  // Base case

    memo[s]++;  // Store substring

    if (s.size() > 1) {
        string k = s, y = s;
        k.erase(0, 1);  // Remove first character
        solve(memo, k);

        y.erase(s.size() - 1, 1);  // Remove last character
        solve(memo, y);
    }
}


int main(){
    
    long long t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        map<string,long long> memo;
        
        solve( memo, s);
        cout << memo.size() << "\n";
    }
    return 0;
}
