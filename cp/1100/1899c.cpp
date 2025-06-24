#include <bits/stdc++.h>
using namespace std;
long long mod(long long a){
    if(a<0){
        return -a;
    }
    return a;
}
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n),pre(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
long long sum=0;
pre[0]=v[0];
if(v[0]>0){
    sum=v[0];
}
else
sum=0;
for(long long i=1;i<n;i++){
 if((mod(v[i-1])%2)!=(mod(v[i])%2)){
    if(v[i]>0){
        sum+=v[i];
        pre[i]=sum;
    }
    else{
        sum+=v[i];
        pre[i]=sum;
        if(sum<0){
            sum=0;
        }
    }
 }
 else{
    pre[i]=v[i];
    if(pre[i]>0)
    sum=pre[i];
    else
    sum=0;
 }
}
long long maxi=INT_MIN;
for(long long i=0;i<n;i++){
 maxi=max(maxi,pre[i]);
}
cout<<maxi<<endl;
}
return 0;
}