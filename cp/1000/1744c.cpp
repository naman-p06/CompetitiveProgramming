#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
char c;
cin>>n>>c;
string s;
cin>>s;
int fg=1;
for(int i=0;i<s.size();i++){
    if(s[i]=='g'){
        fg=i+1;
    }
}
vector<int>v;
int count=1;
int start=0;
for(int i=0;i<s.size();i++){
    if(s[i]==c){
        start=1;
    }
    if(start&&s[i]!='g'){
        count++;
    }
    if(start&&s[i]=='g'){
        v.push_back(count);
        count=0;
        start=0;
    }
    if(i==s.size()-1&&start){
        v.push_back(count+fg);
    }
}
int maxi=INT_MIN;
for(int i=0;i<v.size();i++){
maxi=max(maxi,v[i]);
}
cout<<maxi<<endl;
}
return 0;
}