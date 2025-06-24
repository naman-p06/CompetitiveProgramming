#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<vector<long long>>v(n);
for(int i=0;i<n;i++){
    int s;
    cin>>s;
    for(int j=0;j<s;j++){
        cin>>v[i][j];
    }
}
for(int i=0;i<n;i++){
    sort(v[i].begin(),v[i].end());
}
long long minm=INT_MAX;
long long second=INT_MAX;
for(int i=0;i<n;i++){
    minm=min(minm,v[i][0]);
    second=min(second,v[i][1]);
}
long long ans=minm;
for(int i=0;i<n;i++){
    if(v[i][1]!=second){
        ans+=v[i][1];
    }
}
cout<<ans<<endl;
}
return 0;
}