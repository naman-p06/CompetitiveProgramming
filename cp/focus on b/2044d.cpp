#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), ans;
        unordered_set<int> used;
        set<int> available_numbers; // Maintains available numbers in sorted order

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 1; i <= n + 1; i++) {  // Initialize available numbers
            available_numbers.insert(i);
        }

        for (int i = 0; i < n; i++) {
            if (!used.count(a[i])) {  
                used.insert(a[i]);
                ans.push_back(a[i]);
                available_numbers.erase(a[i]); // Remove from available numbers
            } else {
                int next_unused = *available_numbers.begin(); // Get smallest available number
                ans.push_back(next_unused);
                used.insert(next_unused);
                available_numbers.erase(next_unused);
            }
        }

        for (int x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
