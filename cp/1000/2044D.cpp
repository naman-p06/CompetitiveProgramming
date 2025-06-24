#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
 long long n,a,b;
 cin>>n>>a>>b;
 string s;
 cin>>s;
 long long m=unique(s.begin(),s.end())-s.begin();
 cout<<a*n+max(n*b,(m/2+1)*b)<<endl;
}
return 0;
}