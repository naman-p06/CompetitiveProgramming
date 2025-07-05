#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>v(n),pre(n),suf(n);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    pre[0]=v[0];
    long long mini=v[0];
    suf[n-1]=v[n-1];
    long long maxi=v[n-1];
    for(long long i=1;i<n;i++){
        mini=min(mini,v[i]);
        pre[i]=mini;

    }
    for(long long i=n-2;i>=0;i--){
        maxi=max(maxi,v[i]);
        suf[i]=maxi;

    }
    string ans;
    for(long long i=0;i<n;i++){
     if(v[i]==pre[i]||v[i]==suf[i]){
        ans.push_back('1');
     }
     else{
        ans.push_back('0');
     }
    }
    cout<<ans<<endl;
}
return 0;
}