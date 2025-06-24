#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long>v(n),u;
long long sum=0;
long long count=0;
for(long long i=0;i<n;i++){
 cin>>v[i];
 if(v[i]>5){
    if(v[i]%5)
    u.push_back(5-v[i]%5);
    else u.push_back(0);
}
else{
    u.push_back(5-v[i]);
}
 if(v[i]%2==0){
    count++;
 }
 sum+=v[i];
}
if(k==3){
cout<<sum%3<<endl;
}
if(k==2){
    if(count>=1)
    cout<<0<<endl;
    else
    cout<<1<<endl;
}
if(k==4){
    if(count==0){
        cout<<2<<endl;
    }
    else if(count==1)
    cout<<1<<endl;
    else
    cout<<0<<endl;
}
if(k==5){
    long long mini=INT_MAX;
    for(long long i=0;i<u.size();i++){
     mini=min(mini,u[i]);
    }
    cout<<mini<<endl;
}
}
return 0;
}