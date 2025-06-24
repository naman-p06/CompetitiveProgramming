#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,x;
    cin>>n>>x;
    vector<long long>v(n);
    long long sum=0;
    for(long long i=0;i<n;i++){
     cin>>v[i];
     sum+=v[i];
    }
    if(sum%x==0){
        if(sum/x==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}