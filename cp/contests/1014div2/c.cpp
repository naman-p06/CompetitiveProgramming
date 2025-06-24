#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1,s2;
        cin>>s1>>s2;
        long long codd=0,ceven=0;
        for(long long i=0;i<n;i++){
         if(s2[i]=='0'){
            if((i)%2){
                codd++;
            }
            else{
                ceven++;
            }
         }
        }
        long long feven=0,fodd=0;
        for(long long i=0;i<n;i++){
         if(s1[i]=='1'){
            if((i+1)%2){
                fodd++;
            }
            else{
                feven++;
            }
         }
        }
        if(fodd<=codd &&feven<=ceven){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
