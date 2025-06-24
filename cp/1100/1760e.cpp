#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
     cin>>v[i]; 
    }
    long long j=0;
    long long count=0;
    while(j<n&&v[j]!=0){
        count++;
        j++;
    }
    
    j++;
    long long count0=0;
    while(j<n){
        if(v[j]==0){
            count0++;
        }
        j++;
    }
    long long first=count0-count;
    j=n-1;
    long long scount0=0,scount1=0;
    while(j>=0 &&v[j]!=1){
        scount0++;
        j--;
    }
    
    j--;
    while(j>=0){
        if(v[j]==1){
            scount1++;
        }
        j--;
    }
    long long second=scount1-scount0;
    long long original=0;
    long long fcount=0;
    map<long long,long long>m;
    for(long long i=n-1;i>=0;i--){
     if(v[i]==1){
        m[i]=fcount;
     }
     else{
        fcount++;
     }
    }
    for(auto u:m){
        original+=u.second;
    }
    long long maxi=max(first,second);
    if(maxi<0){
        cout<<original<<endl;
    }
    else{
        cout<<original+maxi<<endl;
    }
}
return 0;
}