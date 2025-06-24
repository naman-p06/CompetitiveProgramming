#include <bits/stdc++.h>
using namespace std;
int main(){

long long n,q;
cin>>n>>q;
vector<long long> v(n),que(q);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
for(long long i=0;i<q;i++){
 cin>>que[i];
}
map<long long,long long>m;
map<long long,bool>vist;
for(long long i=0;i<n;i++){
 if(!vist[v[i]]){
    m[v[i]]=i;
    vist[v[i]]=true;
 }
}
for(long long i=0;i<q;i++){
 long long el=que[i];
 cout<<m[el]+1<<" ";
 map<long long,bool>vis;
 for(long long j=0;j<m[el];j++){
  if(!vis[v[j]]){
    m[el]++;
    vis[v[j]]=true;
  }
  m[el]=0;
 }
}
cout<<endl;

return 0;
}