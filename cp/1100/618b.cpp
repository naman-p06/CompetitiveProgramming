#include <bits/stdc++.h>
using namespace std;
int main(){
 long long n;
 cin>>n;
 vector<long long>v(n);
 unordered_map<long long,bool>u;
 for(long long i=0;i<n;i++){
  cin>>v[i];
 }
 sort(v.rbegin(),v.rend());
 long long prev=0;
 long long ans=0;
 for(long long i=0;i<n;i++){
  if(!u[v[i]]){
    ans+=v[i];
    u[v[i]]=true;
    prev=v[i];
  }
  else{
    if(prev-1<=0){
        break;
    }
    ans+=prev-1;
    u[prev-1]=true;
    prev=prev-1;
    
  }
 }
 cout<<ans<<endl;

return 0;
}