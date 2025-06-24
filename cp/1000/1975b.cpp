#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> v(n);
for(long long i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
vector<long long> t;
long long first=v[0];


for(long long i=0;i<n;i++){
    if(v[i]%first!=0){
        t.push_back(i);
    }
}
long long second=v[t[0]];
vector<long long> h;
int k=t.size();
for(int i=0;i<k;i++){
    if(v[t[i]]%second!=0)
    h.push_back(t[i]);
}
if(!h.empty()){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}