#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,c;
    cin>>n>>c;
    vector<long long> v(n),ans(n);
    for(long long i=0;i<n;i++){
     cin>>v[i];
    }
    for(long long i=0;i<n;i++){
     ans[i]=v[i]+i+1;
    }
    sort(ans.begin(),ans.end());
    long long count=0;
    for(long long i=0;i<n;i++){
        c-=ans[i];
     if(c<0){
        break;
     }
     else{
        count++;
     }
    }
    cout<<count<<endl;
}
return 0;
}