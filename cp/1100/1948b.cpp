#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<long long>v(n),b;
for(long long i=0;i<n;i++){
 cin>>v[i];
}
b.push_back(v[n-1]);
for (int i = n - 2; i >= 0; --i) {
    if (v[i] > b.back()) {
      b.push_back(v[i] % 10);
      b.push_back(v[i] / 10);
    } else {
      b.push_back(v[i]);
    }
  }
reverse(b.begin(),b.end());
bool flag=false;
for(long long i=1;i<b.size();i++){
    
 if(b.size()!=1&&b[i]-b[i-1]<0){
    flag=true;
    break;
 }
}
if(flag){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}