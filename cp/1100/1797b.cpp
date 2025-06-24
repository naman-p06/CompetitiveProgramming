#include <bits/stdc++.h>
using namespace std;
long long give(vector<long long> &v1,vector<long long> &v2){
    long long count=0;
    for(long long i=0;i<v1.size();i++){
     if(v1[i]!=v2[i]){
        count++;
     }
    }
    return count;
}
int main(){
long long t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    vector<vector<long long>>v(n,vector<long long>(n));
    for(long long i=0;i<n;i++){
     for(long long j=0;j<n;j++){
      cin>>v[i][j];
     }
    }
    long long ans=0;
    for(long long i=0,j=n-1;i<j;i++,j--){
        vector<long long> s1,s2;
     for(long long k=0;k<n;k++){
      s1.push_back(v[i][k]);
      s2.push_back(v[j][k]);
     }
     
     reverse(s2.begin(),s2.end());
     long long er=give(s1,s2);
     ans+=er;
    }
    if(n%2){
        vector<long long> s1,s2;
        for(long long k=0;k<n;k++){
            s1.push_back(v[n/2][k]);            
        }
        s2=s1;
        reverse(s1.begin(),s1.end());
        ans+=give(s1,s2);
    }
    // cout<<ans<<endl;
    if(ans>k){
        cout<<"NO"<<endl;
    }
    else{
        if(n%2){
            if((k-ans)%2)
            cout<<"YES"<<endl;
        }
        else if((k-ans)%2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
return 0;
}