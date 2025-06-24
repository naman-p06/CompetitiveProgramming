#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
string s;
cin>>s;
deque<char> dq;
int ans=0;
int j=INT_MIN;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        j=i;
        break;
    }
}
for(int i=0;i<s.size();i++){
    dq.push_back(s[i]);
}
if(j==INT_MIN)
j=s.size()-1;
int k=s.size()-1;
while(j<k){
if(dq[k]=='1'){
    k--;
}
if(dq[k]=='0'){
    ans+=k-j+1;
    dq.pop_back();
    j++;
}
}
cout<<ans<<endl;
}
return 0;
}