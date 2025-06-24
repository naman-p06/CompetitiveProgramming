#include <bits/stdc++.h>
using namespace std;
int main(){
 long long a,b,c,d;
 cin>>a>>b>>c>>d;
 long long ans=0;
 if(a!=c){
    ans+=2*(abs(a-c)+1);
 }
 else{
    ans+=4;
 }
 if(b!=d){
    ans+=2*(abs(b-d)+1);
 }
 else{
    ans+=4;
 }
 cout<<ans<<endl;
return 0;
}