#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,a,b;
cin>>n>>a>>b;
int sub=a-b;
if(sub<0){
    sub=sub*-1;
}
if(sub%2==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}