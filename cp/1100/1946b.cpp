#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007; // 1e9+7

// Fast modular exponentiation
long long power_mod(long long base, long long exp, long long mod) {
    long long result = 1;
    while(exp > 0) {
        if(exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Loop-based modular multiplication to avoid overflow
long long modMul(long long a, long long b, long long mod) {
    a %= mod;
    b %= mod;
    long long result = 0;
    while(b > 0) {
        if(b & 1)
            result = (result + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        long long finalSum = 0;
        for (long long i = 0; i < n; i++){
            cin >> v[i];
            finalSum += v[i]; // final sum is accumulated without mod here
        }
        
        // Compute maximum contiguous subarray sum (with your given sliding logic)
        vector<long long> slid(n + 1);
        long long sum = 0;
        for (long long i = 0; i < n; i++){
            if(v[i] < 0) {
                sum = sum + v[i];
                if(sum <= 0)
                    sum = 0;
                slid[i] = sum;
            }
            else {
                sum += v[i];
                slid[i] = sum;
            }
        }
        slid[n] = 0;
        long long maxi = INT_MIN;
        for (long long i = 0; i <= n; i++){
            maxi = max(maxi, slid[i]);
        }
        
        // To avoid overflow in the multiplication maxi * (2^k - 1),
        // we first reduce maxi modulo MOD.
        maxi = ((maxi % MOD) + MOD) % MOD;
        long long factor = ((power_mod(2, k, MOD) - 1) % MOD + MOD) % MOD;
        long long term = modMul(maxi, factor, MOD);
        
        // Also reduce finalSum modulo MOD
        finalSum = ((finalSum % MOD) + MOD) % MOD;
        long long ans = (term + finalSum) % MOD;
        cout << ans << "\n";
    }
    return 0;
}
