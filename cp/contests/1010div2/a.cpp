#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
 int n,m;
 cin>>n>>m;
 vector<string>v(n);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 int countr=0,countc=0;
 for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<m;j++){
        sum+=v[i][j]-'0';
    }
    if(sum%2==1)
    countr++;
    
 }
 for(int i=0;i<m;i++){
    int sum=0;
    for(int j=0;j<n;j++){
        sum+=v[j][i]-'0';
    }
    if(sum%2==1)
    countc++;
    
 }
 cout<<max(countr,countc)<<endl;
}
return 0;
}