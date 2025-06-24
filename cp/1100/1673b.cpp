#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
    string s;
    cin >> s;

    unordered_map<char, int> first, last, freq;
    unordered_set<char> totalDistinctChars;

    // Step 1: Record first, last position and total distinct characters
    for (int i = 0; i < s.size(); i++) {
        totalDistinctChars.insert(s[i]);
        if (first.find(s[i]) == first.end()) first[s[i]] = i;
        last[s[i]] = i;
        freq[s[i]]++;
    }

    int totalDistinct = totalDistinctChars.size();
    bool ok = true;

    // Step 2: For each character appearing more than once, check condition
    for (auto& p : freq) {
        char ch = p.first;
        if (p.second >= 2) {
            int l = first[ch], r = last[ch];
            unordered_set<char> between;
            for (int i = l + 1; i < r; i++) {
                if (s[i] != ch) between.insert(s[i]);
            }
            if ((int)between.size() < totalDistinct - 1) {
                ok = false;
                break;
            }
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
}
    return 0;
}
