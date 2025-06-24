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
    long long se=v[0];
    long long big=0,both=0;
    for(long long i=1;i<n;i++){
     if((se<=v[i]&&se>=-v[i])||(se>=v[i]&&se<=-v[i])){
        both++;
     }
    }
    big=n-1-both;
    
        if(big>n/2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
   
}
return 0;
}