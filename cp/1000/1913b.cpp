#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    long long n=s.size();
    long long count0=0,count1=0;
    for(long long i=0;i<n;i++){
     if(s[i]=='0')
     count0++;
     else
     count1++;
    }
    long long ans=0;
    for(long long i=0;i<n;i++){
     if(s[i]=='0'){
        if(count1>0){
            count1--;
        }
        else{
            ans=n-i;
            break;
        }
     }
     else{
        if(count0>0){
            count0--;
        }
        else{
            ans=n-i;
            break;
        }
     }
    }
    cout<<ans<<endl;
}
return 0;
}