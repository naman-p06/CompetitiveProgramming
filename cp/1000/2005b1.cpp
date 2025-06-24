#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,m,q;
cin>>n>>m>>q;
vector<int> t(2);
cin>>t[0]>>t[1];

int s;
cin>>s;
if(t[1]<t[0])
swap(t[1],t[0]);
if(s<t[0]){
    cout<<t[0]-1<<endl;
}
else if(s>t[1]){
    cout<<n-t[1]<<endl;
}
else if(s==t[1]|| s==t[0]){
    cout<<0<<endl;
}
else{
    cout<<(t[1]-t[0])/2<<endl;
}
}
return 0;
}