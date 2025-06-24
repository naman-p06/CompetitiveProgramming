#include <bits/stdc++.h>
using namespace std;
int main(){

long long n;
cin>>n;
vector<long long>v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
map<long long,bool>m;
for(long long i=0;i<n;i++){
 if(v[i]!=i+1){
   m[i]=true;
 }
}
long long u=m.size();
if(u==0)
cout<<-1<<endl;
else
cout<<min(n,2*u)<<endl;

return 0;
}