#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    long long count0=0,count1=0;
    for(long long i=0;i<n;i++){
     if(s[i]=='0'){
        count0++;
     }
    }
    count1=n-count0;
    long long mini=(abs(count1-count0))/2;
    // cout<<mini<<endl;
    long long v=min(count0,count1);
    long long maxi=(v/2)*2 +mini;
    if(k==mini){
        cout<<"YES"<<endl;
    }
    else if(k<mini){
        cout<<"NO"<<endl;
    }
    else if(k>maxi){
        cout<<"NO"<<endl;
    }
    else if(k==maxi){
         cout<<"YES"<<endl;
    }
    else{
        if((k-mini)%2==0){
            // cout<<mini<<endl;
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }  
      
}
return 0;
}