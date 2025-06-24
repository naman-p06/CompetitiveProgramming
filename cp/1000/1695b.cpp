#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
if(n%2){
    cout<<"Mike"<<endl;
}
else{
    long long mini=INT_MAX;
    long long ans=0;
    for(long long i=0;i<n;i++){
     if(v[i]<mini){
        ans=i;
        mini=v[i];
     }
    }
    if(ans%2){
        cout<<"Mike"<<endl;
    }
    else{
        cout<<"Joe"<<endl;
    }
}
}
return 0;
}