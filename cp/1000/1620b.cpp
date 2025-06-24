#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long w,h;
    cin>>w>>h;
    long long k;
    cin>>k;
    vector<long long> zx(k);
    for(long long i=0;i<k;i++){
     cin>>zx[i];
    }
    long long u;
    cin>>u;
    vector<long long> hx(u);
    for(long long i=0;i<u;i++){
     cin>>hx[i];
    }
    long long r;
    cin>>r;
    vector<long long> zy(r);
    for(long long i=0;i<r;i++){
     cin>>zy[i];
    }
    long long n;
    cin>>n;
    vector<long long> wy(n);
    for(long long i=0;i<n;i++){
     cin>>wy[i];
    }
    long long first=0,second=0,third=0,fourth=0;
    long long maxi=INT_MIN;
    for(long long i=0;i<u;i++){
        long long ra=zx.back()-zx.front();
     maxi=max(maxi,ra*hx[i]);
    }
    first=maxi;
    maxi=INT_MIN;
    for(long long i=0;i<k;i++){
        long long ra=hx.back()-hx.front();
     maxi=max(maxi,ra*zx[i]);
    }
    second=maxi;
    maxi=INT_MIN;
    for(long long i=0;i<n;i++){
        long long ra=zy.back()-zy.front();
     maxi=max(maxi,ra*wy[i]);
    }
    third=maxi;
    maxi=INT_MIN;for(long long i=0;i<r;i++){
        long long ra=wy.back()-wy.front();
     maxi=max(maxi,ra*zy[i]);
    }
    fourth=maxi;
    maxi=max(first,max(second,max(third,fourth)));
    cout<<maxi<<endl;
}
return 0;
}