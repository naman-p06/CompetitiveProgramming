#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n);
for(long long i=0;i<n;i++)
cin>>v[i];
long long sum=0;
for(long long i=0;i<n;i++){
    sum+=v[i];
}
if(sum%n){
    cout<<"NO"<<endl;
    continue;
}
long long to=sum/n;
for(long long i=1;i<n-1;i++){
    if(v[i-1]>to){
        v[i+1]=v[i+1]+v[i-1]-to;
        v[i-1]=to; 
    }
    else if(v[i-1]<to){
        v[i+1]=v[i+1]-(to-v[i-1]);
        v[i-1]=to;
    }
}
bool a=false;
for(long long i=0;i<n;i++){
    if(v[i]!=to){
        a=true;
        break;
    }
}
if(a){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}