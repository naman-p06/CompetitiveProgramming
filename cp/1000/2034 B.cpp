#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
string s;
cin>>s;
int ans=0;
int count=0;
for(int i=0;i<n;i++){
    
    
    if(s[i]=='0'){
        count++;
    }
    if(s[i]=='1'){
        count=0;
    }
    if(count>=m){
        ans++;
        count=0;
        i+=k-1;
    }
    
}
cout<<ans<<endl;
}
return 0;
}