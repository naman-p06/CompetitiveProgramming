#include <bits/stdc++.h>
using namespace std;
int main(){
 long long n;
 cin>>n;
 vector<long long>v(n),a(n,0);
 for(long long i=0;i<n;i++){
  cin>>v[i];
 }
 long long ans=abs(v[0]);
 a[0]=v[0];
 for(long long i=1;i<n;i++){
  ans+=abs(v[i]-a[i-1]);
  a[i]=v[i];
 }
 cout<<ans<<endl;
return 0;
}