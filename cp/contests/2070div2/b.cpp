#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,x,k;
cin>>n>>x>>k;
string s;
cin>>s;
long long ans=x;
long long fin=0;
long long calc=0;
for(long long i=0;i<n;i++){
 if(s[i]=='L'){
    ans--;
 }
 else{
    ans++;
 }
 calc++;
 if(ans==0){
    fin+=1;
    break;
 }
}
if(fin==0){
    cout<<0<<endl;
    continue;
}
long long nj=0;
long long len=0;
bool flag=false;
long long left=k-calc;
if(left<0){
    cout<<0<<endl;
    continue;
}
for(long long i=0;i<n;i++){
    if(s[i]=='L'){
        nj--;
     }
     else{
        nj++;
     }
     len++;
     if(nj==0){
        flag=true;
        break;
     }
}

if(!flag){
    cout<<fin<<endl;
    continue;
}
else{
    fin+=left/len;
}
cout<<fin<<endl;
}
return 0;
}