#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    long long mini=INT_MAX,sum=0,nc=0;
    for(long long i=0;i<n;i++){
     if(v[i]<0){
        nc++;
        v[i]=-v[i];
     }
     mini=min(mini,v[i]);
     sum+=v[i];
    }
    if(nc%2){
        sum-=2*mini;
    }
    cout<<sum<<endl;
}
return 0;
}