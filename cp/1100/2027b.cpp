#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n),s(n);
for(long long i=0;i<n;i++){
    cin>>v[i];
}
s=v;
sort(v.begin(),v.end());
map<long long,long long>m;
for(long long i=0;i<n;i++){
    // if(m[v[i]]==0){
        m[v[i]]=n-i-1;
    
}
vector<long long>ans;
for(long long i=0;i<n;i++){
    ans.push_back(i+m[s[i]]);
}
long long mini=INT_MAX;
for(long long i=0;i<ans.size();i++){
    mini=min(mini,ans[i]);
}
cout<<mini<<endl;
}
return 0;
}