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
    sort(v.begin(),v.end());

    long long ind1=0,ind2=0;
    long long u=v[0],j=v[n-1];
    for(long long i=0;i<n;i++){
     if((u+v[i])%2==0){
        ind1=i;
     }
    }
    for(long long i=n-1;i>=0;i--){
     if((j+v[i])%2==0){
        ind2=i;
     }
    }
    cout<<min(n-(ind1+1),ind2)<<endl;
}
return 0;
}