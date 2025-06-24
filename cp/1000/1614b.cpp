#include <bits/stdc++.h>
using namespace std;
long long mod(long long a){
    if(a<0)
    return -a;
    return a;
}
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
    priority_queue<pair<long long,long long>>pq;
    map<pair<long long,long long>,long long>m;
    for(long long i=0;i<n;i++){
     pq.push({v[i],i});
    }
    long long i=1;
    while(!pq.empty()){
        if(pq.size()<2){
            m[pq.top()]=i;
            pq.pop();
        }
        else{
            m[pq.top()]=i;
            pq.pop();
            m[pq.top()]=-i;
            pq.pop();
            i++;
        }
    }
    long long ans=0;

    for(long long i=0;i<n;i++){
    ans+=2*mod(m[{v[i],i}])*v[i];
       }
       cout<<ans<<endl;
    cout<<0<<" ";

    for(long long i=0;i<n;i++){
     cout<<m[{v[i],i}]<<" ";
     ans+=mod(m[{v[i],i}]);
    }
    cout<<endl;
}
return 0;
}