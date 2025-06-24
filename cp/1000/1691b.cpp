#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n);
map<long long,long long>m;
for(long long i=0;i<n;i++){
 cin>>v[i];
 m[v[i]]++;
}
bool a=false;
for(long long i=0;i<n;i++){
 if(m[v[i]]==1)
 {
    cout<<-1<<endl;
    a=true;
    break;
 }
}
if(a)
continue;
long long var=0;
for(long long i=0;i<n;i++){

 if(v[i]==v[i+1]&&i+1<n){
    cout<<i+2<<" ";
 }
 else{
    cout<<var+1<<" ";
    var=i+1;
 }  
}
cout<<endl;
}
return 0;
}