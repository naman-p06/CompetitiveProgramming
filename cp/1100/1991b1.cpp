#include <bits/stdc++.h>
using namespace std;
long long mod(long long &a){
    if(a<0){
        a=a*-1;
    }
    return a;
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
map<long long,long long>mp;
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
vector<pair<long long,long long>> ans;
for(long long j=0;j<v.size();j++){
    mp[v[j]]++;
}
long long prev=-1;

}
return 0;
}