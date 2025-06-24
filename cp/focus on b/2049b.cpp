#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
int ind=-1;
for(int i=0;i<s.size();i++){
    if(s[i]=='p'){
        ind=i;
        break;
    }
}
if(ind!=-1){
    bool exist=false;
    for(int i=ind+1;i<s.size();i++){
        if(s[i]=='s'){
            exist=true;
            break;
        }
    }
    if(exist){
        cout<<"NO"<<endl;
        continue;
    }
}
bool new1=false;
int sind=-1;
for(int i=0;i<s.size()-1;i++){
    if(s[i]=='s'&&i>0){
        sind=i;
        break;
    }
}
if(sind!=-1){
    for(int i=sind+1;i<s.size();i++){
        if(s[i]=='p'&&i+1<s.size()){
            cout<<"NO"<<endl;
            new1=true;
            break;
        }
    }
}
if(new1)
continue;
cout<<"YES"<<endl;
}
return 0;
}