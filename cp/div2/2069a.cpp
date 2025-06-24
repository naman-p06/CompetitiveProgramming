#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n-2);
for(long long i=0;i<n-2;i++){
 cin>>v[i];
}
bool a=false;
for(long long i=0;i<n-2;i++){
    if(i+2<n-2){
        if(v[i]==1 &&v[i+1]==0&&v[i+2]==1){
            a=true;
            break;
        }
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