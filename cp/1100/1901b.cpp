#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n);
long long maxval=INT_MIN;
for(long long i=0;i<n;i++){
 cin>>v[i];
 maxval=max(maxval,v[i]);
}
long long bn=INT_MIN;

long long mini=INT_MAX;
for(long long i=0;i<n;i++){
 mini=min(mini,v[i]);
}
bool iszero=false;
if(mini==0)
iszero=true;
if(!iszero){
    cout<<maxval-1<<endl;
    continue;
}
for(long long i=0;i<n;i++){
 v[i]-=mini;
}
vector<long long> ar;
for(long long i=0;i<n;i++){
 bn=max(bn,v[i]);
 if(v[i]==0){
    ar.push_back(bn);
    bn=0;
 }
 else
 ar.push_back(bn);
}
vector<long long> fin;
for(long long i=0;i<n;i++){
 if(v[i]==0)
 fin.push_back(i);
}
long long ans=0;

for(long long i=0;i<fin.size();i++){
  
 ans+=ar[fin[i]];
//  else
//  ans+=ar[fin[i]]-1;
}
if(iszero)
ans--;
else
ans+=mini-1;
if(fin[fin.size()-1]!=n-1){
    ans+=ar[n-1];
}

cout<<ans<<endl;
}
return 0;
}