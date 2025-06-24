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
    long long ans=1;
    set<long long> first,second;
    first.insert(v[0]);
    second.insert(v[0]);
    for(long long i=1;i<n;i++){
     first.insert(v[i]);
     second.erase(v[i]);
     if(second.size()==0){
        ans++;
        second=first;
     }
    }
    cout<<ans<<endl;
}
return 0;
}