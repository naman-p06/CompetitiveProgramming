#include <bits/stdc++.h>
using namespace std;

bool isValid(long long mid, const vector<long long>& v, long long c) {
    long long sum = 0;
    for (long long x : v) {
        long long val = 2 * mid + x;

        // If val * val overflows, reject
        if (val > 1e9) return false; // Because 1e9 * 1e9 = 1e18 (upper safe limit)

        long long sq = val * val;

        // If sum + sq > c, reject
        if (sum > c - sq) return false;

        sum += sq;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n, c;
        cin >> n >> c;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long start = 0, end = 1e9, ans = 0;
        while (start <= end) {
            long long mid = start + (end - start) / 2;
            if (isValid(mid, v, c)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
