#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long ans=0;
    for(long long i=1;i<=n;i++){
     ans+=pow(2,i);
    }
    cout<<ans<<endl;
return 0;
}