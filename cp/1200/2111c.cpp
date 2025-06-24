#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>v(n);
    // map<long long,long long>m;

    for(long long i=0;i<n;i++){
     cin>>v[i];
    //  m[v[i]]++;
    }
    // vector<long long> ans;
    long long mini=LLONG_MAX;
    long long count=1;
    bool var=false;
    long long ini=0;
    long long i=0,j=1;
    while(i<n){
        while(j<n&&v[i]==v[j]){
            j++;
        }
        mini=min(mini,i*v[i]+(n-j)*v[i]);
        i=j;
    }
    cout<<mini<<endl;
}
return 0;
}