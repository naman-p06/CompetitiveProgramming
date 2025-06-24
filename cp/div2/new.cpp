#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool can_transform_to_sequence(int n, int m, vector<int>& a, vector<int>& b) {
    unordered_map<int, int> count_a, count_b;
    
    // Count occurrences in a
    for(int num : a) {
        count_a[num]++;
    }
    
    // Count occurrences in b
    for(int num : b) {
        count_b[num]++;
    }
    
    // Check if it's possible to transform a into b
    for(auto& kv : count_b) {
        int key = kv.first;
        int count = kv.second;
        
        if(count_a[key] < count) {
            return false;
        }
        count_a[key] -= count;
        if(count_a[key] == 0) {
            count_a.erase(key);
        }
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }
        
        if (can_transform_to_sequence(n, m, a, b)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
