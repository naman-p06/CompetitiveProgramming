#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>a(n),b(n);
for(long long i=0;i<n;i++){
    cin>>a[i];
}
for(long long i=0;i<n;i++){
    cin>>b[i];
}
map<int,int>m1,m2;
// long long e1=0;
for(long long i=0;i<n;i++){
    m1[a[i]]++;
}
for(long long i=0;i<n;i++){
    m2[b[i]]++;
}
if(m1.size()>=2 && m2.size()>=2){
    cout<<"YES"<<endl;
}
else if(m1.size()>=3 ||m2.size()>=3){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}