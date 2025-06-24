#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool canMakeBagsEqual(vector<int>& a) {
    sort(a.begin(), a.end());
    unordered_map<int, int> secondBag;

    for (int x : a) {
        // If this number already exists in second bag, we can increment it
        if (secondBag[x] > 0) {
            secondBag[x]--;
            secondBag[x + 1]++;
        } else {
            // Otherwise, just move this number to second bag
            secondBag[x]++;
        }
    }

    // After all operations, check if both bags have same frequencies
    unordered_map<int, int> freqOriginal;
    for (int x : a) freqOriginal[x]++;

    // Build the new bag from frequency map
    unordered_map<int, int> firstBag = freqOriginal;
    unordered_map<int, int> finalBag = secondBag;

    // Now check if frequencies match
    return firstBag == finalBag;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        cout << (canMakeBagsEqual(a) ? "YES" : "NO") << '\n';
    }
    return 0;
}
