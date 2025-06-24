#include <bits/stdc++.h>
using namespace std;
long long mod(long long a){
    if(a<0)
    return -a;
    return a;
}
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n);
long long count=0;
bool a=false;

for(long long i=0;i<n;i++){
 cin>>v[i];
 if(v[i]<0){
    count++;
 }
 if(v[i]==0)
 a=true;
}
// cout<<count<<endl;
if(a){
cout<<0<<endl;
continue;

}
if((mod(count))%2){
    cout<<0<<endl;

}
else{
    cout<<1<<endl;
cout<<1<<" "<<0<<endl;
}
}
return 0;
}