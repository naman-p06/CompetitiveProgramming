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
    int start=1;
    int end=n-1;
    unordered_map<char,bool>u;
    u[s[0]]=true;
    u[s[n-1]]=true;
    bool a=false;
    for(long long i=start;i<end;i++){
        if(u[s[i]]){
            cout<<"YES"<<endl;
            a=true;
            break;
        }
        u[s[i]]=true;
    }
    if(a)
    continue;
    cout<<"NO"<<endl;
}
return 0;
}