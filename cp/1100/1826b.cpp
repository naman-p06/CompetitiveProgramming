#include <bits/stdc++.h>
using namespace std;
bool isp(vector<long long> v,long long h,long long n){
    for(long long i=0;i<n;i++){
     v[i]=v[i]%h;
    }
    bool b=true;
    for(long long i=0,j=n-1;i<=j;i++,j--){
     if(v[i]!=v[j]){
        return false;
     }
    }
    return b;
}
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>v(n),ans;
    long long maxi=INT_MIN;
    for(long long i=0;i<n;i++){
     cin>>v[i];
     maxi=max(maxi,v[i]);
    }
    if(n==1){
        cout<<0<<endl;
        continue;
    }
    ans=v;
    ans.push_back(maxi+1);
    sort(ans.begin(),ans.end());
    long long s=0,e=maxi+1;
    long long fin=0;
    while(s<=e){
        long long mid=s+(e-s)/2;
        if(isp(v,mid,n)){
            fin=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    if(fin==(maxi+1)){
        cout<<0<<endl;
    }
    else{
        cout<<fin<<endl;
    }
}
return 0;
}