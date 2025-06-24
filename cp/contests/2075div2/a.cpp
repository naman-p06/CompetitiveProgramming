#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
long long ans=0;
if(n%2){
     ans+=1;
     n-=k;
     if(n<=0){
        cout<<1<<endl;
        continue;
     }
}
if(n%(k-1)){
    ans+=n/(k-1) +1;
}
else{
    ans+=n/(k-1);
}
cout<<ans<<endl;
}
return 0;
}