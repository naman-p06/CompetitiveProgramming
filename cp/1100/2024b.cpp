#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long>v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
long long ans=0;
long long current;
sort(v.begin(),v.end());
current=v[0];
long long i=0;
if(current==0){
    while(current==0){
        i++;
        current=v[i];
    }
}
long long diff=0;
long long sum=0;
for(i;i<n;i++){
    
    sum+=current*(n-i);
    if(sum>=k){
        break;
    }
    diff+=current;
    while(v[i]-diff==0){
        i++;
    }
    current=v[i]-diff;
    i--;
}
cout<<k+i<<endl;
}
return 0;
}