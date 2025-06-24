#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    long long count=0;
    for(long long i=0;i<n;i++){
     cin>>v[i];
     if(v[i]%2==0){
        count++;
     }
    }
    long long ans=0;
    if(k-count>0){
        ans+=count;
        k=k-count;
        ans+=k/2;
    }
     else{
        ans+=k;
     }
     for(long long i=0;i<n;i++){
      ans+=__builtin_popcount(v[i]);
     }
     cout<<ans<<endl;
}
return 0;
}