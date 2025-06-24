#include <bits/stdc++.h>
using namespace std;
int main(){
long long n,m;
cin>>n>>m;
vector<long long>v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
unordered_map<long long,long long>count,ind;
for(long long i=0;i<n;i++){
 count[v[i]]++;
 ind[i]=count[v[i]];
}
long long ans=0;
for(long long i=0;i<n;i++){
 ans+=(n-1-i-count[v[i]]+ind[i]);
}
cout<<ans<<endl;
return 0;
}