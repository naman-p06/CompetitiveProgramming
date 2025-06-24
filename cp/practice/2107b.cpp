#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    long long maxi=-1,mini=INT_MAX,sum=0;
    for(long long i=0;i<n;i++){
     cin>>v[i];
     maxi=max(maxi,v[i]);
     mini=min(mini,v[i]);
     sum+=v[i];
    }
    long long count=0;
    for(long long i=0;i<n;i++){
     if(v[i]==maxi)
     count++;
    }
    if(maxi-mini>k+1){
        cout<<"Jerry"<<endl;
        continue;
    }
    if(maxi-mini==k+1 &&count>1){
        cout<<"Jerry"<<endl;
        continue;
    }
    if(sum%2){
        cout<<"Tom"<<endl;
    }
    else{
        cout<<"Jerry"<<endl;
    }
}
return 0;
}