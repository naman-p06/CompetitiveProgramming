#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007 
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n), b(n), v(n);

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (long long i = 0; i < n; i++) {
            
            long long s = 0, e = n - 1, ans = 0;
            while (s <= e) {
                long long mid = s + (e - s) / 2;
                if (b[mid] < a[i]) {
                    ans = mid + 1;
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
            v[i] = ans;
        }

        for (long long i = 0; i < n; i++) {
            v[i]-=i;
        }
        long long ans=1;
        for(long long i=0;i<n;i++){
         ans=(ans*v[i])%MOD;
        }
        cout <<ans<< endl;
    }
    return 0;
}
