#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>v(n);
    long long maxi=-1,mini=INT_MAX;
    for(long long i=0;i<n;i++){
     cin>>v[i];
     maxi=max(maxi,v[i]);
     mini=min(mini,v[i]);
    }
    if(maxi==mini){
        cout<<"No"<<endl;
        continue;
    }
    bool a=true;
    cout<<"Yes"<<endl;
    for(long long i=0;i<n;i++){
     if(v[i]==maxi &&a){
        cout<<1<<" ";
        a=false;
     }
     else{
        cout<<2<<" ";
     }
    }
    cout<<endl;

}
return 0;
}