#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n),pre(n);
    
    for(long long i=0;i<n;i++){
        cin>>v[i];
        
    }
    sort(v.begin(),v.end());
    pre[0]=v[0];
    for(long long i=1;i<n;i++){
     pre[i]=v[i]+pre[i-1];
    }
    long long max=v[n-1];
    long long s=0,e=n-1;
    long long mid=s+(e-s)/2;
    long long result;
    while(s<=e){
        // long long val=(mid+1)*([mid])-pre[mid];
        if(val==k){
            result=mid;
            break;
        }
        if(val>k){
            e=mid-1;
        }
        if(val<k){
            result=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<v[result]<<endl;
}
return 0;
}