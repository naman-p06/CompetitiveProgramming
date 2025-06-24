#include <bits/stdc++.h>
using namespace std;
int main(){
 long long n;
 cin>>n;
 vector<long long>v(n),pre1(n),pre2(n);
 for(long long i=0;i<n;i++){
  cin>>v[i];
 }
 pre1[0]=v[0];
 pre2[n-1]=v[n-1];
 for(long long i=1;i<n;i++){
  pre1[i]=pre1[i-1]+v[i];
 }
 for(long long i=n-2;i>=0;i--){
  pre2[i]=pre2[i+1]+v[i];
 }
 long long a=0,b=0;
 for(long long i=0;i<n-1;i++){
  if(pre1[i]==pre2[i+1]){
    a++;
  }
  
 }
 cout<<a<<endl;
return 0;
}