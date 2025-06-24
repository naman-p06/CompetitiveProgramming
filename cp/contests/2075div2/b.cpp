#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long>v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
vector<pair<long long,long long>>vp(n);
for(long long i=0;i<n;i++){
 vp[i].first=v[i];
 vp[i].second=i;
}
sort(vp.rbegin(),vp.rend());
long long ans=0;
if(k==1){
    if(v[0]>=v[n-1]){
        ans+=v[0];
        long long maxi=INT_MIN;
        for(long long i=1;i<n;i++){
         maxi=max(maxi,v[i]);
        }
        ans+=maxi;
    }
    else{
        ans+=v[n-1];
        long long maxi=INT_MIN;
        for(long long i=0;i<n-1;i++){
         maxi=max(maxi,v[i]);
        }
        ans+=maxi;
    }
    cout<<ans<<endl;
    continue;
}
for(long long i=0;i<k+1;i++){
 ans+=vp[i].first;
}
cout<<ans<<endl;
}
return 0;
}