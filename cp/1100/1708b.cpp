#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,l,r;
    cin>>n>>l>>r;
    // if(r-l+1<n){
    //     cout<<"NO"<<endl;
    // }
    // else{

    // }
    vector<long long> ans;
    bool a=false;
    for(long long i=1;i<=n;i++){
        if(l%i==0){
            ans.push_back(l);
            continue;
        }
        long long k=l/i;
        k=k*i;
        if(k+i>r){
            a=true;
            cout<<"NO"<<endl;
            break;
        }
        else{
            ans.push_back(k+i);
        }
    }
    if(!a){
        cout<<"YES"<<endl;
        for(long long i=0;i<ans.size();i++){
         cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}