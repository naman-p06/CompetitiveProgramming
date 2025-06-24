#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,m,l,r;
cin>>n>>m>>l>>r;
long long q=n-m;
if(l==0){
    cout<<0<<" "<<r-q<<endl;
}
else if(r==0){
    cout<<l+q<<" "<<0<<endl;
}
else{
    if(r-q<0){
        cout<<l+q-r<<" "<<0<<endl;
    }
    else{
        cout<<l<<" "<<r-q<<endl;
    }
}
}
return 0;
}