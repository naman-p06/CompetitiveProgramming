#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
vector<vector<int>>v(n,vector<int>(m));
for (int i = 0; i < n; i++)
{
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
}
for(int i=0;i<n;i++){
    sort(v[i].begin(),v[i].end());
}
map<vector<int>,int>mt;
for(int i=0;i<n;i++){
    mt[v[i]]=i;
}
sort(v.begin(),v.end());
vector<int> ans;
int k=0;
int l=0;
for(int i=0;i<n*m;i++){
   int u=0;
    for(int j=0;j<m;j++){
        if(v[i%n][j]==k){
            u=1;
            break;
        }
    }
    if(!u){
        l=1;
    }
    k++;
    ans.push_back(mt[v[i%n]]);
}
if(l){
cout<<-1<<endl;
continue;}
for(int i=0;i<n;i++){
    cout<<ans[i]+1<<" ";
}
cout<<endl;
}

return 0;
}