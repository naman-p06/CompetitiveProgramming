#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    stack<char>st;
    int count=0;
    for(long long i=0;i<s.size();i++){
     if(s[i]=='('){
        st.push(s[i]);
     }
     else{
        st.pop();
     }
     if(st.empty()){
        count++;
     }
    }
    if(count>1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}