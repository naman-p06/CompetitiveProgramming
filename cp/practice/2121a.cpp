#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,s;
    cin>>n>>s;
    vector<long long>v(n);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    long long maxi=*max_element(v.begin(),v.end());
    long long mini=*min_element(v.begin(),v.end());
    if(s>maxi){
        cout<<s-mini<<endl;
    }
    else if(s<mini){
        cout<<maxi-s<<endl;
    }
    else{
        long long ans=maxi-mini;
    ans+=min(maxi-s,s-mini);
    cout<<ans<<endl;
    }
    
}
return 0;
}