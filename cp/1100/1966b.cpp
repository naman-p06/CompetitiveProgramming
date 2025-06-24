// 5:03 - 18
#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
vector<vector<char>>v(n,vector<char>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
}
bool flag=false;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i==0){
            if(j==0){
                if(v[0][0]==v[n-1][m-1]){
                    flag=true;
                    break;
                }
            }
            else if(j==m-1){
                if(v[i][j]==v[n-1][0]){
                    flag=true;
                    break;
                }
            }
            else{
                if(v[i][j]==v[n-1][0]&&v[i][j]==v[n-1][m-1]){
                    flag=true;
                    break;
                }
            }
        }
        else if(j==0){

            if(v[i][j]==v[0][m-1]&&v[i][j]==v[n-1][m-1]){
                flag=true;
                break;
            }
        }
        else if(i==n-1){
            if(v[i][j]==v[0][0]&&v[i][j]==v[0][m-1]){
                flag=true;
                break;
            }
        }
        else if(j==m-1){
            if(v[i][j]==v[0][0]&&v[i][j]==v[n-1][0]){
                flag=true;
                break;
            }
        }
        else{
            if(v[i][j]==v[0][0]&&v[i][j]==v[n-1][0]&&v[i][j]==v[0][m-1]&&v[i][j]==v[n-1][m-1]){
                flag=true;
                break;
            }
        }
    }
    if(flag){
        break;
    }
}
if(flag){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}