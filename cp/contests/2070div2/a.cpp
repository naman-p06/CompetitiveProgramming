#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long d = n / 15;
        long long r = n % 15;
        long long extra = min(r + 1,(long long)3);
        cout << d * 3 + extra << "\n";
    }
    return 0;
}
