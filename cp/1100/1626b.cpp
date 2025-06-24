#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    long long n=s.size();
    map<long long,long long>m;
    long long ans=0;
    bool a=false;
    for(long long i=0;i<n-1;i++){
     long long u=s[i]-'0';
     long long v=s[i+1]-'0';
     m[i]=u+v;
     if(u+v>=10){
        a=true;
        ans=i;
     }
    }
    if(!a){
        s[ans]=m[0]+'0';
        s[ans+1]='a'; 
    }
    else{
        s[ans]=1+'0';
        s[ans+1]=(m[ans]%10)+'0';
    }
    // if(maxi/10==0){
    //     s[ans]=maxi+'0';
    //     s[ans+1]='a';
    // }
    // else{
    //     
    //     s[ans+1]=maxi%10 +'0';
    // }
    for(long long i=0;i<n;i++){
     if(s[i]=='a'){

     }
     else{
        cout<<s[i];
     }
    }
    cout<<endl;
}
return 0;
}