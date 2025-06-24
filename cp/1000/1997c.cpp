#include <bits/stdc++.h>
using namespace std;
int cost(string &s){
int ans=0;
vector<int>left;
for(int i=0;i<s.size();i++){
    if(s[i]=='('){
        left.push_back(i);
    }
    if(s[i]==')'){
        ans+=i-left[left.size()-1];
        left.pop_back();
    }
}
return ans;
}
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
int right=0,left=0;
s[0]='(';
for(int i=1;i<n;i++){
    if(s[i]=='_'){
        if(right>0){
        s[i]=')';
        right--;
    }
    else{
        s[i]='(';
        right++;
    }
    }
    else if(s[i]=='('){
        right++;
    }
    else if(s[i]==')'){
        left++;
        right--;
    }
    
}
cout<<cost(s)<<endl;
}
return 0;
}