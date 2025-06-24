#include <bits/stdc++.h>
using namespace std;
vector<long long> rem(const vector<long long>& arr) {
    set<long long> uni(arr.begin(),arr.end());
    vector<long long> result(uni.begin(),uni.end());
    return result;
}
int main(){
long long t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long>v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
sort(v.begin(),v.end());

map<long long,long long>mp;
for(long long i=0;i<n;i++){
 mp[v[i]]++;
}
vector<long long>s;
s=rem(v);
vector<pair<long long,long long>> pa;
for(long long i=0;i<n-1;i++){
 if(s[i+1]-s[i]==1){
    pa.push_back({s[i+1],s[i]});
 }
}
vector<long long> sum,single;
for(long long i=0;i<pa.size();i++){
 sum.push_back(pa[i].first*mp[pa[i].first]+pa[i].second*mp[pa[i].second]);
}
for(long long i=0;i<s.size();i++){
 single.push_back(mp[s[i]]*s[i]);
}
long long maxi1=INT_MIN,maxi2=INT_MIN;
for(long long i=0;i<sum.size();i++){
 if(sum[i]<=m){
    maxi1=max(maxi1,sum[i]);
 }
}
for(long long i=0;i<single.size();i++){
 if(single[i]<=m){
    maxi2=max(maxi2,single[i]);
 }
}
cout<< max(maxi1,maxi2)<<endl;
}
return 0;
}