#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<pair<long long,long long>> v(n);
    for(long long i=0;i<n;i++){
     cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(), [](const pair<long long, long long>& a, const pair<long long, long long>& b) {
        if (a.first != b.first)
            return a.first < b.first; 
        else
            return a.second > b.second; 
    });
    long long ans=0;
    long long count=0;
    map<long long,bool>m;
    for(long long i=0;i<n;i++){
     if(m[v[i].first]){
        
     }
     else{
        count++;
        ans+=v[i].second;
        if(count>=v[i].first){
            count=0;
            m[v[i].first]=true;
        }
        if(i+1<n&&v[i+1].first!=v[i].first){
            count=0;
        }
     }
    }
     cout<<ans<<endl;
}
return 0;
}