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
    sort(v.rbegin(),v.rend());
    for(long long i=0;i<n;i++){
     cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}