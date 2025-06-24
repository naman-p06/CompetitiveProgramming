#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<long long>a(n),b(n);
    for(long long i=0;i<n;i++){
     cin>>a[i];
    }
    for(long long i=0;i<n;i++){
     cin>>b[i];
    }
    vector<long long>ans;
    long long count=0,maxi=INT_MIN;
    for(long long i=0;i<min(k,n);i++){
     count+=a[i];
     maxi=max(maxi,b[i]);
     ans.push_back(count+(k-i-1)*maxi);
    }
    maxi=INT_MIN;
    for(long long i=0;i<ans.size();i++){
     maxi=max(maxi,ans[i]);
    }
    cout<<maxi<<endl;
}
return 0;
}