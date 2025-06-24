#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,m;
int x,y;
cin>>x>>y;
long long ans;
ans=4*m;
for(int i=1;i<n;i++){
    int a,b;
    cin>>a>>b;
    ans-=2*(m-a+m-b);
    ans+=4*m;
}
cout<<ans<<endl;
}
return 0;
}