#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,d;
cin>>n>>d;
vector<long long>v(n);
for(long long i=0;i<n;i++)
cin>>v[i];
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
long long left=n;
long long ans=0;
for(long long i=0;i<n;i++){
    long long r=d/v[i];
    if(d%v[i])
    r++;
    if(r<left){
        ans++;
        left-=r;
    }
    else
    break;
}
cout<<ans<<endl;
}
return 0;
}