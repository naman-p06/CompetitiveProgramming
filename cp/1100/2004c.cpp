#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
vector<long long>a;

for(long long i=1;i<n;i+=2){
 a.push_back(v[i-1]-v[i]);
}
for(long long i=1,j=0;i<n;i+=2,j++){
 if(k<=0){
    break;
 }
 if(k-a[j]>=0){
    v[i]+=a[j];
    k=k-a[j];
 }
 else{
v[i]+=k;
k=0;
 }
}
long long suma=0,sumb=0;
for(long long i=0;i<n;i+=2){
 suma+=v[i];
}
for(long long i=1;i<n;i+=2){
 sumb+=v[i];
}
cout<<suma-sumb<<endl;
}
return 0;
}