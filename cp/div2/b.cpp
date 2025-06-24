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
map<long long,long long>m;
for(long long i=0;i<n;i++){
    m[v[i]]=0;
    
}
for(long long i=0;i<n;i++){
    m[v[i]]++;   
}
long long maxi=INT_MIN;
for(long long i=0;i<n;i++){
    if(m[v[i]]>1){
        maxi=max(v[i],maxi);
    }
}
long long firstmin=INT_MAX;
for(long long i=0;i<n;i++){
    if(v[i]<firstmin){
        if(m[v[i]]>2||m[v[i]]<=1){
            firstmin=v[i];
        }
    }
}
long long secondmin=INT_MAX;
for(long long i=0;i<n;i++){
    if(v[i]<firstmin){
        if(v[i]!=firstmin&&m[v[i]]>3||m[v[i]]<=1){
            secondmin=v[i];
        }
    }
}
if(2*maxi+secondmin>firstmin){
    cout<<maxi<<" "<<secondmin<<" "<<firstmin<<" "<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}