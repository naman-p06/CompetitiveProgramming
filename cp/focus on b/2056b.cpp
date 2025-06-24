#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Create a map to hold the adjacency list
        map<int, list<int>> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (v[i][j] == '1') {
                    m[i + 1].push_back(j + 1);
                }
            }
        }

        // Initialize the answer array with -1
        vector<int> ans(n, -1);

        // Iterate from n to 1
        for (int i = n; i >= 1; i--) {
            int count = 0;

            // Count connections less than i
            for (auto k : m[i]) {
                if (k < i) {
                    count++;
                }
            }

            // Find the correct position for i
            int pos = count;
            while (ans[pos] != -1) {
                pos++;
            }

            ans[pos] = i;
        }

        // Output the result
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
