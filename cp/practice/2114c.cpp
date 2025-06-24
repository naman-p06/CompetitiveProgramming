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
    set<long long> s(v.begin(),v.end());
    vector<long long>u(s.begin(),s.end());
    long long ans=0;
    for(long long i=0;i<u.size()-1;i++){
     if(u[i+1]-u[i]==1){
        ans++;
        i++;
     }
    }
    cout<<u.size()-ans<<endl;
}
return 0;
}