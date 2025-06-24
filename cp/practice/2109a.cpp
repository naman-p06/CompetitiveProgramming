#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    bool a=false;
    for(long long i=0;i<n;i++){
     if(v[i]==0){
        a=true;
        break;
     }
    }
    if(!a){
        cout<<"YES"<<endl;
        continue;
    }
    bool vi=false;
    for(long long i=0;i<n;i++){
     if(i+1<n&&v[i]==v[i+1]&&v[i]==0){
        vi=true;
        break;
     }
    }
    if(vi){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}