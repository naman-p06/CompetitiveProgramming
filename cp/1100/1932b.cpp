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
    long long lim=0;
    for(long long i=0;i<n;i++){
     if(v[i]>lim){
        lim=v[i];
     }
     else {
        long long h=lim/v[i];
        lim=(h+1)*v[i];
     }
    }
    cout<<lim<<endl;
}
return 0;
}