#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long k;
    cin>>k;
    vector<char>v(k);
    vector<char>m(1000);
    for(long long i=0;i<k;i++){
        cin>>v[i];
        m[v[i]]=true;
    }
    long long i=0;
    for( i=n-1;i>=0;i--){
     if(m[s[i]]){
        break;
     }
    }
    long long maxi=0;
    long long count=0;
    for(long long j=i-1;j>=0;j--){
        count++;
     if(m[s[j]]){
        maxi=max(maxi,count);
        count=0;
     }
    }
    maxi=max(maxi,count);
    cout<<maxi<<endl;
}
return 0;
}