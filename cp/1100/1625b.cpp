#include <bits/stdc++.h>
using namespace std;
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
    map<long long,pair<long long,bool>>m;
    long long ind=-1,ind1=0;
    long long mini=INT_MAX;
    for(long long i=0;i<n;i++){
     if(!m[v[i]].second){
        m[v[i]]={i,true};
     }
     else{
        long long diff=i-m[v[i]].first;
        mini=min(mini,diff);
        m[v[i]]={i,true};

     }
    }
    if(mini==INT_MAX)
    cout<<-1<<endl;
    else{
        cout<<n-mini<<endl;
    }
}
return 0;
}