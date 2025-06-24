#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>a(n),b(n);
    for(long long i=0;i<n;i++){
     cin>>a[i];
    }
    for(long long i=0;i<n;i++){
     cin>>b[i];
    }
    unordered_map<long long,long long>m,nt;
    m[a[0]]=1;
    nt[b[0]]=1;
    long long count=1;
    long long cur=a[0];
    for(long long i=1;i<n;i++){
     if(a[i]==cur){
        count++;
     }
     else{
        m[cur]=max(m[cur],count);
        cur=a[i];
        count=1;
     }
    }
    m[cur] = max(m[cur], count);
    count=1;
    cur=b[0];
    for(long long i=1;i<n;i++){
        if(b[i]==cur){
           count++;
        }
        else{
           nt[cur]=max(nt[cur],count);
           cur=b[i];
           count=1;
        }
    }
    nt[cur] = max(nt[cur], count);
       long long maxi=INT_MIN;
       for(long long i=0;i<n;i++){
        maxi=max(maxi,m[a[i]]+nt[a[i]]);
        maxi=max(maxi,m[b[i]]+nt[b[i]]);
       }
       cout<<maxi<<endl;
}
return 0;
}