#include <bits/stdc++.h>
using namespace std;
long long got(long long ele,long long lim,vector<long long>& pre){
    long long s=0;
    long long e=lim;
    long long ans=-1;
    while(s<=e){
        long long mid=s+(e-s)/2;
        if(pre[mid]==ele){
            ans=mid+1;
            break;
        }
        else if(pre[mid]>ele){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long> v(n),pre(n),suf(n,0);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    if(n==1){
    cout<<0<<endl;continue;}

    pre[0]=v[0];
    suf[n-1]=v[n-1];
    for(long long i=1;i<n;i++){
     pre[i]=pre[i-1]+v[i];
    }
    for(long long i=n-2;i>=0;i--){
     suf[i]=suf[i+1]+v[i];
    }
    // long long k=n/2;
    vector<long long> ans;
    for(long long i=1;i<n;i++){
     long long find=suf[i];
     long long u= got(find,i-1,pre);
        if(u!=-1){
            ans.push_back(n-i+u);
        }
    }
    if(ans.empty()){
        cout<<0<<endl;
        continue;
    }
    long long maxi=-1;
    for(long long i=0;i<ans.size();i++){
     maxi=max(maxi,ans[i]);
    }
    cout<<maxi<<endl;
}
return 0;
}