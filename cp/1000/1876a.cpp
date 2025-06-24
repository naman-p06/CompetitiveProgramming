#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, p;
        cin >> n >> p;
        vector<long long> a(n), b(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++) {
            cin >> b[i];
        }
        map<long long, vector<long long>> ind;
        for (long long i = 0; i < n; i++) {
            ind[b[i]].push_back(i);
        }
        sort(b.begin(), b.end());
        long long ans = p;
        long long remaining = n - 1;
        long long q = n + 1;
        long long j = 0;
        while (remaining > 0) {
            if (b[j] < p && j < q) {
                long long idx = ind[b[j]].back();
                ind[b[j]].pop_back();
                if (a[idx] > remaining) {
                    ans += b[j] * remaining;
                    remaining = 0;
                } else {
                    ans += b[j] * a[idx];
                    remaining -= a[idx];
                }
                j++;
            } else {
                ans += remaining * p;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
