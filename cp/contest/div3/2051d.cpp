#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, l, r;
        cin >> n >> l >> r;
        vector<long long> v(n);
        long long sum = 0;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        long long ans = 0;

        sort(v.begin(), v.end());
        long long atmost = sum - l;
        long long atleast = sum - r;
        long long i = 0, j = n - 1;

        while (i < j) {
            long long pairSum = v[i] + v[j];
            if (pairSum < atleast) {
                i++;
            } else if (pairSum > atmost) {
                j--;
            } else {
                long long left = i + 1, right = j - 1, valid_k = j;
                while (left <= right) {
                    long long mid = left + (right - left) / 2;
                    if (v[i] + v[mid] >= atleast) {
                        valid_k = mid;
                        right = mid - 1;
                    } else {
                        left = mid + 1;
                    }
                }
                ans += (j - valid_k + 1);
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
