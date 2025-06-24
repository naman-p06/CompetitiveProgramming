#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n),pre(n),check,y;
for(long long i=0;i<n;i++){
 cin>>v[i];
}
y=v;
sort(v.begin(),v.end());
map<long long,long long>m;
for(long long i=0;i<n;i++){
 m[v[i]]=i;
}
pre[0]=v[0];
for(long long i=1;i<n;i++){
 pre[i]=pre[i-1]+v[i];
}
for(long long i=0;i<n-1;i++){
 if(pre[i]<v[i+1]){
    check.push_back(i);
 }
}
check.push_back(n-1);
for(long long i=0;i<y.size();i++){
 long long ind=m[y[i]],o=0;
 for(long long j=0;j<check.size();j++){
  if(check[j]>=ind){
    o=check[j];
    break;
  }
 }
 cout<<o<<" ";
}
cout<<endl;
}
return 0;
}