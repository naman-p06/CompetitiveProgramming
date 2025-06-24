#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long>v(n);
for(long long i=0;i<n;i++)
cin>>v[i];
long long mini=INT_MAX;
for(int i=0;i<n;i++){
    long long h=k-v[i]%k;
    mini=min(mini,h);
}
cout<<mini<<endl;
}
return 0;
}