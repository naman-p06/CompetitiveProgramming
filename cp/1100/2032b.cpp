#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
if(n==1){
    if(k==1){
        cout<<1<<endl<<1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
else if(n==k){
    cout<<-1<<endl;
}
else if(k==1){
    cout<<-1<<endl;
}
else{
    if((n-k)%2==0){
        cout<<5<<endl;
        cout<<1<<" "<<2<<" "<<k<<" "<<k+1<<" "<<n<<endl;
    }
    else{
    cout<<3<<endl;
    cout<<1<<" "<<k<<" "<<k+1<<endl;
    }
}
}
return 0;
}