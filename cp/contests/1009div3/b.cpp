#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n);
long long sum=0;
for(long long i=0;i<n;i++){
 cin>>v[i];
 sum+=v[i];
}
cout<<sum-(n-1)<<endl;
}
return 0;
}