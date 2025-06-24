#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,x;
    cin>>n>>x;
    vector<long long>v(n);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    long long ind=0;
    for(long long i=0;i<n;i++){
     if(v[i]==1){
        ind=i;
        break;
     }
    }
    int count2=0;
    for(long long i=n-1;i>=0;i--){
     if(v[i]==0){
        count2++;
     }
     else{
        break;
     }
    }
    if(n-ind-count2<=x){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}