#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<long long>v(n);
 for(long long i=0;i<n;i++){
  cin>>v[i];
 }
 bool u=false;
 long long even=0,odd=0,oddc=0,mini=INT_MAX;
 for(long long i=0;i<n;i++){
  if(v[i]%2){
    u=true;
    odd+=v[i];
    oddc++;
    mini=min(mini,v[i]);
}
  else{
    even+=v[i];
  }
 }
 if(!u){
    cout<<0<<endl;
 }
 else{
    if(oddc%2==0){
        cout<<odd-mini+even<<endl;
    }
    else{
        cout<<odd+even<<endl;
    }
 }
return 0;
}