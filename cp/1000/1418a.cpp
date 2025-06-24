#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long x,y,k;
cin>>x>>y>>k;
long long v=y*k+k-1;
// long long v=x-1+reqcoal;
if(v%(x-1)){
    cout<<v/(x-1)+k+1<<endl;
}
else{
    cout<<v/(x-1)+k<<endl;
}
}
return 0;
}