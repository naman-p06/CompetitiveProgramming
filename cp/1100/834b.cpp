#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<char,long long>u;
   
    for(long long i=n-1;i>=0;i--){
     if(!u[s[i]]){
        u[s[i]]=i;
     }
    }
    map<long long,long long>m;
    unordered_map<char,bool>h;
    long long count=0;
    for(long long i=0;i<n;i++){
     if(i!=u[s[i]]&&!h[s[i]]){
        count++;
        h[s[i]]=true;
        
     }
     else if(i==u[s[i]]){
        if(count>0)
        count--;
        // u[]
     }
    }
return 0;
}