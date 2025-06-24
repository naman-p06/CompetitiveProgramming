#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;
    vector<vector<long long>>v(n,vector<long long>(m));
    for(long long i=0;i<n;i++){
     for(long long j=0;j<m;j++){
      cin>>v[i][j];
     }
    }
    map<long long,bool>mp;
    for(long long i=0;i<n;i++){
     for(long long j=0;j<m;j++){
      if(!mp[v[i][j]]){
        if(i+1<n&&v[i][j]==v[i+1][j]){
            mp[v[i][j]]=true;
        }
        else if(j+1<n&&v[i][j]==v[i][j+1]){
            mp[v[i][j]]=true;
        }
        else if(j-1>=0&&v[i][j]==v[i][j-1]){
            mp[v[i][j]]=true;
        }
        else if(i-1>=0&&v[i][j]==v[i-1][j]){
            mp[v[i][j]]=true;
        }
        else{
            mp[v[i][j]]=false;
        }
      }
     }
    }
    long long count=0;
    for(auto k:mp){
        if(k.second){
            count++;
        }
    }
    long long op=mp.size();
    if(count>0){
        cout<<op-count+(count-1)*2<<endl;
    }
    else{
        cout<<op-1<<endl;
    }
}
return 0;
}