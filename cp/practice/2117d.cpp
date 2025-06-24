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
    if(n==1){
        cout<<"Yes"<<endl;
        continue;
    }
    long long y=(2*v[0]-v[1]);
    if(y%(n+1)){
        cout<<"NO"<<endl;
        continue;
    }
    else{
        y=y/(n+1);
    }
    long long x=v[0]-n*(y);
    if(x<0||y<0){
        cout<<"NO"<<endl;
        continue;
    }
    bool a=false;
    for(long long i=2;i<n;i++){
     v[i]-=x*(i+1);
     v[i]-=y*(n-i);
     if(v[i]!=0){
        a=true;
        break;
     }
    }
    if(a){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
return 0;
}