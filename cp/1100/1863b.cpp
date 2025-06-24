#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<long long>v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
map<int,int>m;
for(long long i=0;i<n;i++){
 m[v[i]]=i;
}
int count=0;
for(long long i=0;i<n;i++){
    if(m[v[i]-1]>i)
    count++;
}
cout<<count<<endl;
}
return 0;
}