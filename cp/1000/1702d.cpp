#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
string s;
cin>>s;
int p;
cin>>p;
int totalsum=0;
for(int i=0;i<s.size();i++)
totalsum+=s[i]-'a'+1;
vector<pair<char,int>> v;
for(int i=0;i<s.size();i++){
    v[i].first=s[i];
    v[i].second=i;
}
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
vector<int>ans;
for(int i=0;i<v.size();i++){
    if(totalsum<=p){
       
        break;
    }
    else{
        ans.push_back(v[i].second);
        totalsum-=v[i].first;
    }
}
vector<bool> fin;
for(int i=0;i<v.size();i++){
fin[v[i].second]=true;
}
for(int i=0;i<s.size();i++){
    if(!fin[i]){
        cout<<s[i];
    }
}
cout<<endl;
}
return 0;
}