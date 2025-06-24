#include <bits/stdc++.h>
using namespace std;

int main(){
long long t;
cin>>t;
while(t--){
    long long n,q;
    cin>>n>>q;
    vector<long long> v(n),a(q);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    map<long long,long long>m;
    for(long long i=0;i<q;i++){
     cin>>a[i];
     m[a[i]]++;
    }
    for(long long i=0;i<n;i++){
     long long ele=v[i];
     for(auto u:m){
      long long gh=pow(2,u.first);
      if(ele%gh==0){
        v[i]+=(pow(2,u.first-1));
      }
     }
    }
    
    for(long long i=0;i<n;i++){
     cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}