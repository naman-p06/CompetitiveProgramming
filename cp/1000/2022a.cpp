#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,r;
cin>>n>>r;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int ans=0;
int nt=0;
for(int i=0;i<n;i++){
    if(v[i]%2){
        nt++;
    }
    ans+=v[i]/2;
}

int remaining=r-ans;
ans=ans*2;
if(remaining>nt)
ans+=nt;
else
ans+=2*remaining-nt;
cout<<ans<<endl;
}
return 0;
}