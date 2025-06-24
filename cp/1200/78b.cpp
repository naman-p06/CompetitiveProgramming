#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 
 string ans="";
 string def="ROYGBIV";
 int u=n/7;
 for(long long i=0;i<u;i++){
  ans+=def;
 }
 int k=n%7;
 if(k<=4&&k>0)
 ans+=def.substr(3,k);
 else
 ans+=def.substr(0,k);
 cout<<ans<<endl;
return 0;
}