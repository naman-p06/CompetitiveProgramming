#include <bits/stdc++.h>
using namespace std;
int main(){
 string s1,s2,s3;
 cin>>s1>>s2>>s3;
 map<char,int>m;
 if(s1[1]=='>'){
    m[s1[0]]++;
 }
 else{
    m[s1[2]]++;
 }
 if(s2[1]=='>'){
    m[s2[0]]++;
 }
 else{
    m[s2[2]]++;
 }
 if(s3[1]=='>'){
    m[s3[0]]++;
 }
 else{
    m[s3[2]]++;
 }
 vector<long long>v1;
 for(auto u:m){
    v1.push_back(u.second);
 }
 sort(v1.begin(),v1.end());
 if(v1[0]==v1[1]||v1[1]==v1[2]){
    cout<<"Impossible"<<endl;

 }
 else{
 string ans;
 ans.resize(3);
    for(auto u:m){
        if(u.second==2){
            ans[2]=u.first;
        }
        else if(u.second==1){
            ans[1]=u.first;
        }
        else{
            ans[0]=u.first;
        }
    }
    unordered_map<char,bool>op;
    op[ans[1]]=true;
    op[ans[2]]=true;
    if(!op['A']){
        ans[0]='A';
    }
    else if ((!op['B'])){
        ans[0]='B';
    }
    else{
        ans[0]='C';
    }
    
    cout<<ans<<endl;
 }
return 0;
}