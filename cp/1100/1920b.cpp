#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, x, k;
        cin >> n >> x >> k;
        vector<long long> v(n), a(n), b(n);
        for(long long i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        a[0] = v[0];
        for(long long i = 1; i < n; i++){
            a[i] = a[i-1] + v[i];
        }
        long long sum = 0;
        for(long long j = n-1; j >= n-k; j--){
            sum += v[j];
        }
        b[0] = sum;
        long long start = n - k;
        long long last = n - 1;
        for(long long i = 1; i <= x; i++){
            start--;
            if(start >= 0){
                sum += v[start];
            }
            sum -= v[last];
            last--;
            b[i] = sum;
        }
        vector<long long> ans;
        for(long long i = 0; i <n-k-1; i++){
            ans.push_back(a[n-i-k-1] - b[i]);
        }
        // ans.push_back(0);
        long long maxi = LLONG_MIN;
        for(long long i = 0; i < ans.size(); i++){
            maxi = max(maxi, ans[i]);
        }
        cout << maxi << endl;
    }
    return 0;
}
