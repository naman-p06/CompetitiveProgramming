#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> ans;

    
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        int low = i, high = n - 1, best = i;

       
        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[mid] - v[i] <= k) {
                best = mid; 
                low = mid + 1; 
            } else {
                high = mid - 1;
            }
        }

        ans.push_back(best - i);
    }

    int maxDifference = *max_element(ans.begin(), ans.end());
    cout << maxDifference+1 << endl;

    return 0;
}
