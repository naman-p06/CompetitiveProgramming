#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]==s[n-1]){
        if(s[0]=='A'){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    else{
        if(s[0]=='A'){
            long long count=0;
            for(long long i=0;i<n;i++){
             if(s[i]=='B'){
                count++;
             }
            }
            if(count>1){
                cout<<"Bob"<<endl;
            }
            else{
                cout<<"Alice"<<endl;
            }
        }
        else{
            if(s[n-1]==s[n-2]){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
        }
    }
}
return 0;
}