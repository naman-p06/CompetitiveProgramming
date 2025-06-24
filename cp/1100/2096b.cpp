#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long> l(n),r(n),maxi,mini;
    for(long long i=0;i<n;i++){
        cin>>l[i];
    }
    for(long long i=0;i<n;i++){
        cin>>r[i];
    }
    for(long long i=0;i<n;i++){
        long long u=max(l[i],r[i]);
        long long op=min(l[i],r[i]);
        maxi.push_back(u);
        mini.push_back(op);
    }
    sort(mini.begin(),mini.end());
    reverse(mini.begin(),mini.end());
    long long sum=0;
    for(long long i=0;i<n;i++){
        sum+=maxi[i];
    }
    for(long long i=0;i<k-1;i++){
     sum+=mini[i];
    }
    // if(k==1){
        sum++;
    // }
    cout<<sum<<endl;
}
return 0;
}