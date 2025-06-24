#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> v(n);
map<long long,long long>m;
for(long long i=0;i<n;i++){
 cin>>v[i];
 m[v[i]]++;
}
bool a=false;
for(auto k:m){
    if(k.second>1){
        a=true;
        break;
    }
}
if(a){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}