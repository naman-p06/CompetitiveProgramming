#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,m,q;
cin>>n>>m>>q;
vector<int> t(m);
vector<int> s(q);
for(int i=0;i<m;i++){
    cin>>t[i];
}
for(int i=0;i<q;i++){
    cin>>s[i];
}
sort(t.begin(),t.end());
for(int i=0;i<q;i++){
    int a=s[i];
    if(a<t[0]){
        cout<<t[0]-1<<endl;
        continue;
    }
    if(a>t[t.size()-1]){
        cout<<n-t[t.size()-1]<<endl;
        continue;
    }
    int j;
    for(int k=0;k<m;k++){
        if(t[k]>a){
            j=k;
            break;
        }
    }
    int ans=t[j]-t[j-1]-2;
    if(ans==0)
    cout<<1<<endl;
    else
    cout<<ans<<endl;
}
}
return 0;
}