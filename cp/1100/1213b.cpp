#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    if(n==1){
        cout<<0<<endl;
        continue;
    }
    long long mini=v[n-1];
    long long ans=0;
    for(long long i=n-2;i>=0;i--){
     if(v[i]>mini){
        ans++;
     }
     else{
        mini=v[i];
     }
    }
    cout<<ans<<endl;
}
return 0;
}