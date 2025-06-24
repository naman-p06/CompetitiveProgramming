#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n-1);
for(int i=0;i<n-1;i++){
cin>>v[i];
}
int m=1501;
cout<<m<<" ";
for(int i=0;i<n-1;i++){
m+=v[i];
cout<<m<<" ";
}
}
return 0;
}