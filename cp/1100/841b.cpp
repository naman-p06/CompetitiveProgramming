#include <bits/stdc++.h>
using namespace std;
int main(){
 long long n;
 cin>>n;
 vector<long long>v(n);
 for(long long i=0;i<n;i++){
  cin>>v[i];
 }
 bool a=false;
 for(long long i=0;i<n;i++){
  if(v[i]%2){
    a=true;
    break;
  }
 }
 if(a)
 cout<<"First"<<endl;
 else
 cout<<"Second"<<endl;
return 0;
}