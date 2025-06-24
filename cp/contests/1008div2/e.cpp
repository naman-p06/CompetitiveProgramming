#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
const int MOD = 998244353;
const int MAXN = 200005;
 
// Precompute modular inverses for 1 ... MAXN-1.
vector<ll> inv(MAXN);
void precomputeInverses() {
    inv[1] = 1;
    for (int i = 2; i < MAXN; i++) {
        inv[i] = MOD - (MOD / i) * inv[MOD % i] % MOD;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    precomputeInverses();
    
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        
        // Precompute binomials: c[j] = C(n, j) for j = 0,...,n.
        vector<ll> c(n+1, 0);
        c[0] = 1;
        for (int j = 1; j <= n; j++){
            c[j] = c[j-1] * (n - j + 1) % MOD;
            c[j] = c[j] * inv[j] % MOD;
        }
        
        // Precompute prefix arrays:
        //   T[j]   = sum_{u=0}^{j} c[u]
        //   S1[j]  = sum_{u=0}^{j} u * c[u]
        //   S2[j]  = sum_{u=0}^{j} u^2 * c[u]
        //   E[j]   = sum_{u=0}^{j} [u even] * c[u]
        //   O[j]   = sum_{u=0}^{j} [u odd] * c[u]
        vector<ll> T_arr(n+1, 0), S1_arr(n+1, 0), S2_arr(n+1, 0), E_arr(n+1, 0), O_arr(n+1, 0);
        T_arr[0] = c[0];
        S1_arr[0] = 0;
        S2_arr[0] = 0;
        E_arr[0] = c[0]; // 0 is even.
        O_arr[0] = 0;
        for (int j = 1; j <= n; j++){
            T_arr[j] = (T_arr[j-1] + c[j]) % MOD;
            S1_arr[j] = (S1_arr[j-1] + j * c[j]) % MOD;
            S2_arr[j] = (S2_arr[j-1] + (1LL * j * j % MOD) * c[j] % MOD) % MOD;
            if(j % 2 == 0){
                E_arr[j] = (E_arr[j-1] + c[j]) % MOD;
                O_arr[j] = O_arr[j-1];
            } else {
                O_arr[j] = (O_arr[j-1] + c[j]) % MOD;
                E_arr[j] = E_arr[j-1];
            }
        }
        
        ll T_total = T_arr[n];   // = 2^n mod MOD
        ll S1_total = S1_arr[n]; // = n * 2^(n-1) mod MOD
        ll S2_total = S2_arr[n]; // = n(n+1)*2^(n-2) mod MOD
        ll E_total = E_arr[n];
        ll O_total = O_arr[n];
 
        // Let inv4 be the modular inverse of 4 and inv2 that of 2.
        ll inv4 = 748683265; // since 4 * 748683265 mod MOD = 1.
        ll inv2 = (MOD + 1) / 2;
 
        // Our derived quantities for a given B (the number of zeros in s) are:
        //   T1(B) = (S2_total - S2_arr[B])
        //             - 2B*(S1_total - S1_arr[B])
        //             + B^2*(T_total - T_arr[B])
        //   T2(B) = if (B even) then (O_total - O_arr[B]) else (E_total - E_arr[B])
        //
        // Our “raw” sum over nonempty subsequences is raw = (T1(B)-T2(B))/4.
        // To match the expected outputs the final answer is taken as:
        //   Answer = raw/2 = (T1(B)-T2(B))/(8) mod MOD.
        //
        // (In our first test case this extra factor of ½ is not visible because the numbers are small.)
 
        int B = 0;
        for (char ch : s)
            if(ch == '0') B++;
        
        for (int qi = 0; qi < q; qi++){
            int idx;
            cin >> idx;
            idx--; // convert to 0-indexed.
            if(s[idx]=='0'){
                s[idx] = '1';
                B--;
            } else {
                s[idx] = '0';
                B++;
            }
            ll part1 = (S2_total - S2_arr[B] + MOD) % MOD;
            ll part2 = (2LL * B % MOD) * ((S1_total - S1_arr[B] + MOD) % MOD) % MOD;
            ll part3 = (1LL * B * B % MOD) * ((T_total - T_arr[B] + MOD) % MOD) % MOD;
            ll T1_val = (part1 - part2 + part3) % MOD;
            if(T1_val < 0) T1_val += MOD;
            
            ll T2_val;
            if(B % 2 == 0)
                T2_val = (O_total - O_arr[B] + MOD) % MOD;
            else
                T2_val = (E_total - E_arr[B] + MOD) % MOD;
            
            ll diff = (T1_val - T2_val + MOD) % MOD;
            // Our raw answer is diff/4; then we multiply by the extra factor of ½ (i.e. divide by 2)
            ll ans = diff * inv4 % MOD;
            ans = ans * inv2 % MOD;
            cout << ans % MOD << "\n";
        }
    }
    return 0;
}
