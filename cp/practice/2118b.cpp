#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long j=1;
    cout<<2*n-1<<endl;
    for(long long i=1;i<n;i++,j++){
     cout<<i<<" "<<1<<" "<<j<<endl;
     cout<<i<<" "<<j+1<<" "<<n<<endl;

    }
    cout<<n<<" "<<1<<" "<<n<<endl;
}
return 0;
}