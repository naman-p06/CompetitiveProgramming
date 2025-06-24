#include <bits/stdc++.h>
using namespace std;
bool check(string &s){
    if(s.size()<4){
        return false;
    }
    for(int i=0;i<s.size();i++){
        if(i+3<s.size()){
            if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='0'){
                return true;
            }
        }
    }
    return false;
}
int main(){
long long t;
cin>>t;
while(t--){
    string s;
    cin>>s;
int n;
cin>>n;
vector<vector<int>>v(n,vector<int>(2));
for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
        cin>>v[i][j];
    }
}
for(int i=0;i<n;i++){
    int index=v[i][0]-1;
    int value=v[i][1];
    s[index]=(char)(value+'0');
    bool a=check(s);
    if(a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
return 0;
}