#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        const int bu = 30;
        vector<int> cnt(bu, 0);
        for (int i = 0; i < n; i++){
            for (int b = 0; b < bu; b++){
                if (a[i] & (1 << b))
                    cnt[b]++;
            }
        }
        
        long long answer = 0;
  
        for (int i = 0; i < n; i++){
            long long sun = 0;
            for (int b = 0; b < bu; b++){
                if (a[i] & (1 << b)){
                    sun += (1LL << b) * (n - cnt[b]);
                } else {
                    sun += (1LL << b) * cnt[b];
                }
            }
            answer = max(answer, sun);
        }
        
        cout << answer << "\n";
    }
    
    return 0;
}
