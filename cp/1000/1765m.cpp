#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<int>v;
for(int i=1;i<n;i++){
if(n%i==0){
    v.push_back(i);
}
}
long long t=v[v.size()-1];
cout<<t<<" "<<n-t<<endl;
}
return 0;
}