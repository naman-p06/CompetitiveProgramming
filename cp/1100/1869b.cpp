#include <bits/stdc++.h>
using namespace std;
long long mod(long long a){
    if(a>0)
    return a;
    return -a;
}
int main(){
long long t;
cin>>t;
while(t--){
long long n,k,a,b;
cin>>n>>k>>a>>b;
vector<long long>x(n),y(n);
for(long long i=0;i<n;i++){
 cin>>x[i]>>y[i];
}
long long inix=x[a-1],iniy=y[a-1];
long long finx=x[b-1],finy=y[b-1];
long long inmin=LLONG_MAX/2,finmin=LLONG_MAX/2;
for(long long i=0;i<k;i++){
 inmin=min(inmin,mod(inix-x[i])+mod(iniy-y[i]));
}
for(long long i=0;i<k;i++){
 finmin=min(finmin,mod(finx-x[i])+mod(finy-y[i]));
}
long long ans=min(inmin+finmin,(mod(finx-inix)+mod(finy-iniy)));
cout<<ans<<endl;
}
return 0;
}