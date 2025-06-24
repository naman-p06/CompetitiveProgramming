#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
long long odd=0;
for(long long i=0;i<n;i++){
 if(v[i]%2){
    odd++;
 }
}
if(odd==n||odd==0){
    cout<<0<<endl;
    continue;
}
long long maxi=INT_MIN;
for(long long i=0;i<n;i++){
 if(v[i]%2){
    maxi=max(maxi,v[i]);
 }
}
long long count=0;
for(long long i=0;i<n;i++){
 if(v[i]%2==0){
    if(v[i]<maxi){
        maxi=maxi+v[i];
        count++;
    }
    else{
        maxi=maxi+2*v[i];
        count+=2;
    }
 }
}
cout<<count<<endl;
}
return 0;
}