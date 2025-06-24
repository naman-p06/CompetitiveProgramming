#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
 string s;
 cin>>s;
 vector<int> u,l,ans(s.size(),0);
 for(int i=0;i<s.size();i++){
    if(s[i]>=65 &&s[i]<=90 &&s[i]!=66){
        u.push_back(i);
    }
    if(s[i]>=97 &&s[i]<=122&&s[i]!=98){
        l.push_back(i);
    }
    if(s[i]=='B'){
        if(!u.empty()){
            ans[u[u.size()-1]]=1;
            u.pop_back();
        }
    }
    if(s[i]=='b'){
        if(!l.empty()){
            ans[l[l.size()-1]]=1;
            l.pop_back();
        }
    }
 }
 string h;
 for(int i=0;i<s.size();i++){
    if(!ans[i]){
        h.push_back(s[i]);
    }
 }
 cout<<h<<endl;
}
return 0;
}