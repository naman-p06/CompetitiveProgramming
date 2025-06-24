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
stack<char>st;
long long count=0;
for(long long i=0;i<n;i++){
 if(s[i]=='(')
 st.push(s[i]);
 else{
    if(st.empty()){
        count++;
    }
    else{
        st.pop();
    }
 }
}
cout<<(count+st.size())/2<<endl;
}
return 0;
}