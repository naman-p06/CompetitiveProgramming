#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
map<int,bool>m;
vector<int>v;
for(int i=1;i<=n;i++){
if(!m[i]){
    v.push_back(i);
}
if(i*2<=n){
v.push_back(i*2);
m[i*2]=true;}
}
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;
}
return 0;
}