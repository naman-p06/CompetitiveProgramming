#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> v(n);
        long long maxi=INT_MIN,mini=INT_MAX;
        for(long long i = 0; i < n; i++){
            cin >> v[i];
            maxi=max(maxi,v[i]);
            mini=min(mini,v[i]);
        }
       cout<<maxi-mini<<endl;
    }
    return 0;
}
