#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<int> v(k);
for(long long i=0;i<k;i++)
cin>>v[i];
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
long long count=0;
long long h=n/2;
long long t=0;
long long catmove=0;
for(long long i=0;i<k;i++){
    
t+=n-v[i];
if(t<n&&t>catmove){
    count++;
}
catmove++;
}
cout<<count<<endl;
}
return 0;
}