#include <bits/stdc++.h>
using namespace std;
int main(){
 long long n,x;
 cin>>n>>x;
 vector<long long>v(n);
 long long pre=0;
 for(long long i=0;i<n;i++){
  cin>>v[i];
  pre+=v[i];
 }
 if(pre+n-1==x){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
return 0;
}