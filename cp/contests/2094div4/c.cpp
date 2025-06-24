#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<vector<long long>>v(n+1,vector<long long>(n+1));
map<long long,long long>m,p;
for(long long i=1;i<=n;i++){
 for(long long j=1;j<=n;j++){
  cin>>v[i][j];
  m[i+j]=v[i][j];
  p[v[i][j]]=1;
 }
}
long long find=1;
for(long long i=1;i<=2*n;i++){
 if(p[i]!=1){
    find=i;
    break;
 }
}
cout<<find<<" ";
for(long long i=2;i<=2*n;i++){
    cout<<m[i]<<" ";
   }
   cout<<endl;
}

return 0;
}