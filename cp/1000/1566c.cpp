#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<vector<int>> v(2,vector<int>(n));
for(int i=0;i<2;i++){
    for(int j=0;j<n;j++){
        cin>>v[i][j];
    }
}
int count=0;
map<int,bool>m;
    for(int j=0;j<n;j++){
        if((v[0][j]==0 &&v[1][j]==1)||(v[0][j]==1 &&v[1][j]==0)){
        count++;
        m[j]=true;
        }
    }
    int ans=count*2;
    for(int j=0;j<n-1;j++){
        if(!m[j]){
            if(v[0][j]==0&&v[0][j+1]==1){
                ans+=2;
                m[j+1]=true;
                m[j]=true;
            }
            else if(j>0&&!m[j-1]&&v[0][j]==0 &&v[0][j-1]==1){
                ans+=2;
                m[j-1]=true;
                m[j]=true;
            }
            else if(v[0][j]==0&&v[0][j+1]==0){
                ans+=1;
                m[j]=true;
            }
        }
    }
    cout<<ans<<endl;

}
return 0;
}