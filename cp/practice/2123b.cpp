#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,j,k;
    cin>>n>>j>>k;
    vector<long long>v(n);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    if(k>=2){
        cout<<"Yes"<<endl;
    }
    else{
        long long maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,v[i]);
        }
        if(v[j-1]==maxi){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
return 0;
}