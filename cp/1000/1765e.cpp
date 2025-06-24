#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,a,b;
cin>>n>>a>>b;
if(a>b){
    cout<<1<<endl;
}
else{
    if(n%a){
        cout<<n/a+1<<endl;
    }
    else{
        cout<<n/a<<endl;
    }
}
}
return 0;
}