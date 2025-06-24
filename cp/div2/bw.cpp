#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> students(n, vector<int>(5));
        vector<int> count(5, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 5; ++j) {
                cin >> students[i][j];
                if (students[i][j] == 1) count[j]++;
            }
        }
        bool possible = false;
        for (int d1 = 0; d1 < 5 && !possible; ++d1) {
            for (int d2 = d1 + 1; d2 < 5 && !possible; ++d2) {
                if (count[d1] >= n / 2 && count[d2] >= n / 2) {
                    int c1 = 0, c2 = 0, both = 0;
                    for (int i = 0; i < n; ++i) {
                        if (students[i][d1] == 1 && students[i][d2] == 1) both++;
                        else if (students[i][d1] == 1) c1++;
                        else if (students[i][d2] == 1) c2++;
                    }
                    if (c1 + both >= n / 2 && c2 + both >= n / 2 && c1 + c2 + both == n) {
                        possible = true;
                    }
                }
            }
        }
        if (possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
