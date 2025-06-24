#include <bits/stdc++.h>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
vector<vector<long long>>v(m,vector<long long>(n));
for(long long i=0;i<m;i++){
    for(long long j=0;j<n;j++){
        cin>>v[i][j];
    }
}
bool a=false;
long long sum=0;
for(long long i=m-1;i>=0;i--){
    for(long long j=n-1;j>=0;j--){
        if(v[i][j]==0){
            v[i][j]=min(v[i][j+1],v[i+1][j])-1;
            if(v[i][j]==v[i-1][j]||v[i][j]==v[i][j-1]){
                a=true;
                break;
            }
        }
        else{
            if((i+1<m&&(v[i][j]>=v[i+1][j]))||(j+1<n&&(v[i][j]>=v[i][j+1]))){
                a=true;
                break;
            }
        }
            sum+=v[i][j];
        
    }
    if(a)
    break;
}
if(a)
cout<<-1<<endl;
else{
cout<<sum<<endl;
}
return 0;
}