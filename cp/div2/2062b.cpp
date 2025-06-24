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
int t=0;
for(long long i=0;i<n;i++){
    if(v[i]<=2*max(i,n-1-i)){
        t=1;
        cout<<"NO"<<endl;
        break;
    }
}
if(t)
continue;
cout<<"YES"<<endl;
}

return 0;
}