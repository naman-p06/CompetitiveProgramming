#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
string s;
cin>>s;
vector<int>v(m);
for(long long i=0;i<m;i++){
 cin>>v[i];
}
set<int> o(v.begin(),v.end());
vector<int>q(o.begin(),o.end());
string c;
cin>>c;
sort(c.begin(),c.end());
for(int i=0;i<q.size();i++){
    int ind=q[i]-1;
    s[ind]=c[i];
}
cout<<s<<endl;
}
return 0;
}