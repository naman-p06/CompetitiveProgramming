#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,vb,vs;
    cin>>n>>vb>>vs;
    vector<long long>v(n);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    long long x,y;
    cin>>x>>y;
    long long ans=1;
    float mini=INT_MAX;
    for(long long i=1;i<n;i++){
        float dis=sqrt(y*y+(x-v[i])*(x-v[i]));
        float ts=dis/vs;
        float ti=v[i]/vb;
        if((ti+ts)<=mini){
            ans=i+1;
            mini=ti+ts;
        }
    }
    cout<<ans<<endl;
return 0;
}