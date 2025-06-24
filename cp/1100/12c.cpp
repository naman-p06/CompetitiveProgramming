#include <bits/stdc++.h>
using namespace std;
int main(){
 long long n,m;
 cin>>n>>m;
 vector<long long>v(n);
 for(long long i=0;i<n;i++){
  cin>>v[i];
 }
 map<string,long long>mp;
 vector<string>gh(m);
 for(long long i=0;i<m;i++){
  cin>>gh[i];
  mp[gh[i]]++;
 }
 sort(v.begin(),v.end());
 vector<long long>ans;
 for(auto u:mp){
    ans.push_back(u.second);
 }
 sort(ans.rbegin(),ans.rend());
 long long mini=0,maxi=0;
 for(long long i=0;i<ans.size();i++){
  mini+=ans[i]*v[i];
 }
 reverse(v.begin(),v.end());
 for(long long i=0;i<ans.size();i++){
    maxi+=ans[i]*v[i];
   }
   cout<<mini<<" "<<maxi<<endl;
return 0;
}