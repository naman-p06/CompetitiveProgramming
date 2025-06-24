#include <bits/stdc++.h>
using namespace std;
long long ceil(long long x,long long y){
    if(x%y){
        return x/y+1;
    }
    else{
        return x/y;
    }
}
int main(){
long long t;
cin>>t;
while(t--){
long long x,y,n;
cin>>x>>y>>n;
long long ans=0;
if(max(x,y)<=n){
    if(x==0&& y==0){
        cout<<0<<endl;
    }
    else if(x>y){
        if(y==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    
    else{
        cout<<2<<endl;
    }
}
else if(x>y){
    if(x%n){
        ans=x/n +1;
    }
    else
    ans=x/n;
   if(ceil(x,n)==ceil(y,n) ){
    cout<<ans*2<<endl;
   }
   else{
    cout<<ans*2-1<<endl;
   }
}
else{
    if(y%n){
        ans=y/n+1;
    }
    else
    ans=y/n;
    cout<<2*ans<<endl;
}
}
return 0;
}