#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,q;
cin>>n>>q;
vector<long long> v(n),k(q);
for(long long i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
for(long long i=0;i<q;i++){
    cin>>k[i];
}
map<long long,long long>m;
long long x=n;
for(long long i=0;i<n;i++,x--){
    long long h= (n-1-i)+(x*i);
    m[h]+=1;
    if(i+1<n){
        long long g=(i+1)*(n-i-1);
        m[g]+=v[i+1]-v[i]-1;
    }
}
for(long long i=0;i<q;i++){
    cout<<m[k[i]]<<" ";
}
cout<<endl;
}
return 0;
}