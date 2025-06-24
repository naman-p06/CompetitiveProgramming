#include <bits/stdc++.h>
using namespace std;
int main(){
    long long r,d;
    cin>>r>>d;
    long long n;
    cin>>n;
    vector<vector<long long>>v(n,vector<long long>(3));
    long long ans=0;
    for(long long i=0;i<n;i++){
     for(long long j=0;j<3;j++){
        cin>>v[i][j];
     }
    }
    for(long long i=0;i<n;i++){
        long long dis=v[i][0]*v[i][0]+v[i][1]*v[i][1];
        long long rad=v[i][2];
        if((dis)>=((rad+r-d)*(rad+r-d))){
            if((dis)<=((r-rad)*(r-rad))){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
return 0;
}