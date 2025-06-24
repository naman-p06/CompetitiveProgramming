#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<pair<long long,long long>>v1(n);
    for(long long i=0;i<n;i++){
     cin>>v1[i].first>>v1[i].second;
    }
    long long m;
    cin>>m;
    vector<pair<long long,long long>>v2(m);
    for(long long i=0;i<m;i++){
        cin>>v2[i].first>>v2[i].second;
    }
    long long mini=LLONG_MAX,maxi=LLONG_MIN;
    long long mini1=LLONG_MAX,maxi1=LLONG_MIN;
    
    for(long long i=0;i<n;i++){
     mini=min(mini,v1[i].second);
     maxi1=max(maxi1,v1[i].first);
    }
    for(long long i=0;i<m;i++){
    maxi=max(maxi,v2[i].first);
    mini1=min(mini1,v2[i].second);
    }
    
    long long ans=max(maxi-mini,maxi1-mini1);
    
        cout<<max(ans,(long long)0)<<endl;
    
return 0;
}