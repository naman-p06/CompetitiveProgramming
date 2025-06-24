#include <bits/stdc++.h>
using namespace std;
#define M 1000000007

// Modular multiplication
long long mul(long long a, long long b) {
    return (a % M) * (b % M) % M;
}

// Modular inverse using Fermat's Little Theorem
long long modinv(long long a) {
    long long res = 1, b = M - 2;
    while (b) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long term1 = mul(n % M, mul((n + 1) % M, (2 * n + 1) % M));
        term1 = mul(term1, modinv(6));  // n(n+1)(2n+1)/6

        long long term2 = mul(n % M, (n + 1) % M);
        term2 = mul(term2, modinv(2));  // n(n+1)/2

        long long sum = (2 * term1 % M - term2 + M) % M;
        sum = mul(sum, 2022);

        cout << sum << endl;
    }
    return 0;
}
