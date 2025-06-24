#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<vector<long long>>v(n,vector<long long>(m));
vector<pair<long long,long long>>sum;
for(long long i=0;i<n;i++){
    long long h=0;
    for(long long j=0;j<m;j++){
        cin>>v[i][j];
        h+=v[i][j];
    }
    sum.push_back({h,i});
}
sort(sum.begin(),sum.end());
reverse(sum.begin(),sum.end());
vector<long long> ans;
for(long long i=0;i<sum.size();i++){
 long long j=sum[i].second;
 for(long long k=0;k<m;k++){
  ans.push_back(v[j][k]);
 }
}
long long fin=0,mu=0;
for(long long i=0;i<ans.size();i++){
 mu+=ans[i];
 fin+=mu;
}
cout<<fin<<endl;
}
return 0;
}