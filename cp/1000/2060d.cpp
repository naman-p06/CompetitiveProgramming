#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
bool a=false;
for(int i=0;i<n-1;i++){
    long long h=min(v[i],v[i+1]);
    if(h==v[i+1]&&v[i]!=v[i+1]){
        a=true;
        cout<<"NO"<<endl;
        break;
    }
    v[i]=0;
    v[i+1]-=h;
}
if(!a){
    cout<<"YES"<<endl;
}
}
return 0;
}