#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long find(vector<long long> &arr) {
    long long res = arr[0];
    for (long long i = 1; i < arr.size(); i++) {
        res = gcd(arr[i], res);
        if (res == 1)
            return 1;
    }
    return res;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n), b,c;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (long long i = 0; i < n; i += 2) {
            b.push_back(v[i]);
        }
        for (long long i = 1; i < n; i += 2) {
            c.push_back(v[i]);
        }
        long long x = find(b);
        long long y=find(c);
        bool a = false,p=false;

        for (long long i = 1; i < n; i += 2) {
            if (v[i] % x == 0) {
                a = true;
                break;
            }
        }
        for (long long i = 0; i < n; i += 2) {
            if (v[i] % y == 0) {
                p = true;
                break;
            }
        }
        if (a&&p) {
            cout << 0 << endl;
        }
         else if(!a){
            cout << x << endl;
        }
        else if(!p){
            cout<<y<<endl;
        }
    }
    return 0;
}
