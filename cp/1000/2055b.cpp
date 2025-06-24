#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>a(n),b(n);
for(long long i=0;i<n;i++)
cin>>a[i];
for(long long i=0;i<n;i++)
cin>>b[i];
for(long long i=0;i<n;i++){
    a[i]=a[i]-b[i];
}
long long cnt=0;
long long ind;
for(long long i=0;i<n;i++){
    if(a[i]<0){
    cnt++;
    ind=i;}
}
if(cnt>1){
    cout<<"NO"<<endl;
    continue;
}
else if(cnt==0){
      cout<<"YES"<<endl;
      continue;
}
long long mini=INT_MAX;
for(long long i=0;i<n;i++){
if(a[i]<mini&&a[i]!=a[ind]){
    mini=a[i];
}
}
if(mini>=a[ind]*(-1)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}