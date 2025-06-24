#include <bits/stdc++.h>
using namespace std;
long long modi(long long a){
    if(a>=0){
        return a;
    }
    return a*-1;
}
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n),b(n+1);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
for(long long i=0;i<n+1;i++){
    cin>>b[i];
}
long long count=0;
long long maxi=modi(v[0]-b[n]);
long long last=b[n];
bool flag=false;
for(long long i=0;i<n;i++){
 maxi=min(maxi,modi(v[i]-last));
}
for(long long i=0;i<n;i++){
    maxi=min(maxi,modi(b[i]-last));
}
for(long long i=0;i<n;i++){
 count+=max(v[i],b[i])-min(v[i],b[i]);
 if((b[i]<=last && v[i]>=last)|| (b[i]>=last&&v[i]<=last))
 flag=true;
}
if(flag)
count+=1;
else
count+=maxi+1;   
cout<<count<<endl;
}
return 0;
}