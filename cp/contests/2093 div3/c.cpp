#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long a,b;
    cin>>a>>b;
    string s=to_string(a);
    for(long long i=0;i<b;i++){
     s+=s;
    }
    long long p=stod(s);
    
    bool bg=false;
    
    for(long long i=2;i*i<=p;i++){
     if(p%i==0){
        bg=true;
        break;
     }
    }
    if(bg){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
return 0;
}