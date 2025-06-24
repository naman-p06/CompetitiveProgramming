#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,k,b,s;
    cin>>n>>k>>b>>s;
    if(s<k*b){
        cout<<-1<<endl;
        continue;   
    }
    long long u;
    if(s-k*(b+1)-1>0){
        u=k*(b+1)-1;
        s=s-k*(b+1)-1;
    }
    else{
        u=s;
        s=0;
    }
    long long total=1+s/(k-1);
    if(s%(k-1)){
        total++;
    }
    if(total>n){
        cout<<-1<<endl;
    }
    else{
        cout<<s%(k-1)<<" ";
        cout<<u<<" ";
        for(long long i=0;i<s/(k-1);i++){
         cout<<k-1<<" ";
        }
        for(long long i=0;i<n-total;i++){
         cout<<0<<" ";
        }
        cout<<endl;
    }
}
return 0;
}