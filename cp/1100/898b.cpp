#include <bits/stdc++.h>
using namespace std;
int main(){
 long long n,a,b;
 cin>>n>>a>>b;
 bool v=false;
 if(n%a==0){
    cout<<"YES"<<endl;
    cout<<n/a<<" "<<0<<endl;
    return 0;
 }
 if(n%b==0){
    cout<<"YES"<<endl;
    cout<<0<<" "<<n/b<<endl;
    return 0;
 }

 long long first,second;
 for(long long i=1;i<n;i++){
  long long q=n-b*i;
  if(q>0){
    if(q%a==0){
        v=true;
        first=q/a;
        second=i;
        break;
    }
  }
  else{
    break;
  }
 }
 if(v){
    cout<<"YES"<<endl;
    cout<<first<<" "<<second<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
return 0;
}   