#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long>v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
priority_queue<long long>maxi;
priority_queue<long long,vector<long long>,greater<long long>>mini;
long long sum=0;
for(long long i=0;i<n;i++){
 maxi.push(v[i]);
 mini.push(v[i]);
 sum+=v[i];
}
long long com=0;
sort(v.begin(),v.end());
long long j=v.size()-1;
for(long long i=0;i<k;i++){
 com+=v[j--];
}
com=sum-com;
long long ans=0;
for(long long i=0;i<k;i++){
 long long first,second,big;
 if(mini.size()>1){
first= mini.top();
mini.pop();
second=mini.top();
mini.pop();}

big=maxi.top();
maxi.pop();
if(big<=first+second){
    mini.push(first);
    mini.push(second);
    ans+=big;
}
else{
maxi.push(big);
ans=ans+first+second;
}
}
cout<<max(sum-ans,com)<<endl;
}
return 0;
}