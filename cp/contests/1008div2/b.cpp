#include <bits/stdc++.h>
using namespace std;
int main(){
    long long test_cases;
    cin >> test_cases;
    while(test_cases--){
        long long size, value;
        cin >> size >> value;
        if(value % 2){
            for(long long i = 0; i < size - 1; i++){
                cout << size << " ";
            }
            cout << size - 1 << endl;
        }
        else{
            for(long long i = 0; i < size - 2; i++){
                cout << size - 1 << " ";
            }
            cout << size << " " << size - 1 << endl;
        }
    }
    return 0;
}
