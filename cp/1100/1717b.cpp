#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        r--, c--;  // convert to 0-based index

        int mod_target = (r + c) % k;

        vector<vector<char>> grid(n, vector<char>(n, '.'));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if ((i + j) % k == mod_target) {
                    grid[i][j] = 'X';
                }
            }
        }

        // Print the grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << grid[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}
