#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    long long ans=pow(2,s.size()-1);
    reverse(s.begin(),s.end());
    bool u=false;
    if(s[n-1]=='1'){
    s.pop_back();
         u=true;
    }

    long long p=0;
    if(u)
    p=1;
    long long k=1;
    cout<<p<<endl;
    for(long long i=0;i<s.size();i++){
     if(s[i]=='0'){
        k*=1;
     }else{
        k+=pow(2,p);
     }
     p++;

    }
    cout<<k<<endl;
    ans+=k;
    cout<<ans-1<<endl;
return 0;
}