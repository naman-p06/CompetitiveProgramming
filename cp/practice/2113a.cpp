#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long k,a,b,x,y;
    cin>>k>>a>>b>>x>>y;
    if(x<=y){
        if(k>=a){
            k=k-a;
            long long ans=k/x+1;
            k=a+k%x-x;
            if(k>=b){
                k=k-b;
                ans+=k/y+1;
            }
            cout<<ans<<endl;
        }
        else{
            long long ans=0;
            if(k>=b){
                k=k-b;
                ans+=k/y+1;
            }
            cout<<ans<<endl;
        }
    }
    else{
        if(k>=b){
            k=k-b;
            long long ans=k/y+1;
            k=b+k%y-y;
            if(k>=a){
                k=k-a;
                ans+=k/x+1;
            }
            cout<<ans<<endl;
        }
        else{
            long long ans=0;
            if(k>=a){
                k=k-a;
                ans+=k/x+1;
            }
            cout<<ans<<endl;
        }
    }
}
return 0;
}