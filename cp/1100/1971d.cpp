#include <bits/stdc++.h>
using namespace std;
string rem(const string& binaryString) {
    string result;
    
    if (binaryString.empty()) return result;
    
    result.push_back(binaryString[0]);
    
    for (size_t i = 1; i < binaryString.size(); ++i) {
        if (binaryString[i] != binaryString[i - 1]) {
            result.push_back(binaryString[i]);
        }
    }
    
    return result;
}
int main(){
long long t;
cin>>t;
while(t--){
string s;
cin>>s;
s=rem(s);
bool used=false;
long long count=0;
for(int i=0;i<s.size();i++){
    if(!used){
       if( s[i]=='0'&&s[i+1]=='1'){
        used =true;
        count++;
        i++;
       }
       else{
        count++;
       }
    }
    else{
        count++;
    }
}
cout<<count<<endl;

}
return 0;
}