#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int a, b, l;
        cin >> a >> b >> l;
        set<int> unique_products;
        for (long long x = 1; x <= l; x *= a) {
            for (long long y = 1; x * y <= l; y *= b) {
                if (l % (x * y) == 0) {
                    unique_products.insert(x * y);
                }
            }
        }

        cout << unique_products.size() << endl;
    }
    return 0;
}
