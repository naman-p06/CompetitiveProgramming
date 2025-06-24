#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long>v(n);
for(long long i=0;i<n;i++){
    cin>>v[i];
}
vector<long long> b(m);
for(long long i=0;i<m;i++){
    cin>>b[i];
}
for(long long i=0;i<b.size();i++){
    v[0]=min(v[0],b[i]-v[0]);
}
sort(b.begin(),b.end());
// for(long long i=0;i<v.size();i++){
//     if(i==0){
//         continue;
//     }
//     long long current=min(v[i],b-v[i]);
//     if(current>=prev){
//         v[i]=current;
//     }
//     else{
//         v[i]=max(v[i],b-v[i]);
//     }
//     prev=v[i];
// }
bool found =false;
for(long long i=0;i<v.size();i++){
    if(i+1<v.size()){
        if(v[i+1]-v[i]<0){
            found=true;
            break;
        }
    }
}
if(found){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}