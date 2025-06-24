#include <bits/stdc++.h>
using namespace std;
int main(){
 long long n;
 cin>>n;
 vector<vector<long long>>v(n,vector<long long>(n));
 int count1=0;
 for(long long i=0;i<n;i++){
    int count=0;
    if(count1%2){
        count=1;
    }
  for(long long j=0;j<n;j++){
   if(count%2){
    v[i][j]='B';
   }
   else{
    v[i][j]='W';
   }
   count++;
  }
  count1++;
 }
 for(long long i=0;i<n;i++){
  for(long long j=0;j<n;j++){
   cout<<(char)v[i][j];
  }
  cout<<endl;
 }
return 0;
}