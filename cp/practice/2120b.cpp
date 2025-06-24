#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,s;
    cin>>n>>s;
    vector<vector<long long>>v(n,vector<long long>(4));
    for(long long i=0;i<n;i++){
        for(long long j=0;j<4;j++){
     cin>>v[i][j];
         
        }
    }
    long long ans=0;
    for(long long i=0;i<n;i++){
     if((v[i][2]+v[i][3]==s)){
        if(v[i][2]==v[i][3]){
            ans++;
        }
        else{
            if((v[i][0]==-1&&v[i][1]==1)||(v[i][0]==1&&v[i][1]==-1)){
                ans++;
            }
        }
     }
     else if(v[i][2]==v[i][3]){
         if((v[i][0]==-1&&v[i][1]==-1)||(v[i][0]==1&&v[i][1]==1)){
                ans++;
            }
     }
    }
    cout<<ans<<endl;
}
return 0;
}