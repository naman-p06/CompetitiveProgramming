#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
// vector<long long>v(n);
string s;
cin>>s;
vector<long long>v;
long long w=0,b=0;
for(long long i=0;i<k;i++){
 if(s[i]=='W')
 w++;
}
v.push_back(w);
long long start=0;
for(long long i=k;i<n;i++){
 if(s[start]=='W'){
    w--;
 }
 start++;
 if(s[i]=='W'){
    w++;
 }
 v.push_back(w);
}
long long mini=INT_MAX;
for(long long i=0;i<v.size();i++){
 mini=min(mini,v[i]);
}
cout<<mini<<endl;
}
return 0;
}