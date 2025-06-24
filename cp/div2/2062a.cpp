#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
string s;
cin>>s;
long long count=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        count++;
    }
}
cout<<count<<endl;
}
return 0;
}