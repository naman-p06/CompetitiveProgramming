#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        // Compute prefix sum of positives.
        vector<long long> prefixPos(n+1, 0);
        for (int i = 1; i <= n; i++){
            prefixPos[i] = prefixPos[i-1] + (a[i-1] > 0 ? a[i-1] : 0);
        }
        
        // Compute suffix sum of negatives (absolute value).
        vector<long long> suffixNeg(n, 0);
        suffixNeg[n-1] = (a[n-1] < 0 ? -a[n-1] : 0);
        for (int i = n-2; i >= 0; i--){
            suffixNeg[i] = suffixNeg[i+1] + (a[i] < 0 ? -a[i] : 0);
        }
        
        long long ans = prefixPos[n];         // pure positive strategy
        ans = max(ans, suffixNeg[0]);           // pure negative strategy
        for (int i = 1; i < n; i++){
            ans = max(ans, prefixPos[i] + suffixNeg[i]);
        }
        
        cout << ans << "\n";
    }
    return 0;
}
