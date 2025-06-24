#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
int count=1;
int t=(count+1)*2;
int ans=1;

while(count<n){
    if(t>n){
        ans+=1;
        break;
    }
    ans++;
    count=t;
    t=(count+1)*2;

}
cout<<ans<<endl;
}
return 0;
}