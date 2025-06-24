#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int j=0;
for(int i=0;i<n;i++){
    if(v[i]==n){
        if(i!=0&&i!=n-1){
        cout<<-1<<endl;
        j=1;
        break;}
    }
}
if(j)
continue;
vector<int>ans;


for(int i=0;i<n;i++){
    if(v[i]!=n)
    ans.push_back(v[i]);
}

reverse(ans.begin(),ans.end());
ans.push_back(n);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
return 0;
}