#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
int mex=n;
vector<int> ans(n);
for(long long i=n-1;i>=0;i--){
    ans[i]=mex-v[i];
    mex=min(mex,ans[i]);
}
for(long long i=0;i<n;i++){
 cout<<ans[i]<<" ";
}
cout<<endl;
}
return 0;
}