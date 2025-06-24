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
long long ecount=0;
long long ocount=0;
for(long long i=0;i<n;i++){
    if(v[i]%2==0){
        ecount++;
    }
    else
    ocount++;
}
if(ecount==0){
    cout<<0<<endl;
}
if(ecount>1){
    cout<<n-ecount+1<<endl;
}
}
return 0;
}