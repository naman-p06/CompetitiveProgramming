#include <bits/stdc++.h>
using namespace std;
long long mod(long long a){
    if(a<=0)
    return -a;
    return a;
}
int main(){
long long t;
cin>>t;
while(t--){
long long m,n;
cin>>m>>n;
vector<vector<long long>>v(m,vector<long long>(n));
for(long long i=0;i<m;i++){
    for(long long j=0;j<n;j++){
     cin>>v[i][j];
    }
}
long long sum=0;
long long maxi=INT_MIN,mini=INT_MAX;
long long count=0;
for(long long i=0;i<m;i++){
    for(long long j=0;j<n;j++){
     sum+=mod(v[i][j]);
     if(v[i][j]<=0){
        count++;
        maxi=max(maxi,v[i][j]);
     }
     else
     mini=min(mini,v[i][j]);
    }
}
long long final=min(mod(maxi),mini);
if(count%2)
sum=sum-2*final;
cout<<sum<<endl;
}
return 0;
}