#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;
map<char,bool>m;
long long ans=0;
for(long long i=0;i<n;i++){
 if(!m[s[i]]){
    ans+=n-i;
    m[s[i]]=true;
 }
}
cout<<ans<<endl;
}
return 0;
}