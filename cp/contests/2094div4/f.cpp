#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--){
        int r, c, x;
        cin >> r >> c >> x;
        
        if ((c % x == 0) && (x <= c)) {
            for (int i = 0; i < r; i++){
                int cur = (i % 2 == 0 ? 1 : x);
                for (int j = 0; j < c; j++){
                    cout << cur << " ";
                    if(i % 2 == 0) {
                        cur++;
                        if(cur > x) cur = 1;
                    }
                    else {
                        if(cur == x) cur = 1;
                        else cur++;
                    }
                }
                cout << "\n";
            }
        }
        else {
            int num = 1;
            for (int i = 0; i < r; i++){
                for (int j = 0; j < c; j++){
                    cout << num << " ";
                    num++;
                    if(num > x)
                        num = 1;
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
