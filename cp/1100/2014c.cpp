#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
if(n<=2){
    cout<<-1<<endl;
    continue;
}
sort(v.begin(),v.end());
long long k=v[n-1];
long long sum=0;
for(long long i=0;i<n-1;i++){
 sum+=v[i];
}
long long index=0;
index=n/2;
long long ans=v[index]*(n*2)-sum;
ans=ans-k;
if(ans<0){
    cout<<0<<endl;
}
else{
    cout<<ans+1<<endl;
}
}
return 0;
}