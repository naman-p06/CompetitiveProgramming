#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int ans=n*m;
if(ans%3!=0){
    ans=ans/3;
    cout<<ans+1<<endl;
}
else{
    ans=ans/3;
    cout<<ans<<endl;
}
}
return 0;
}