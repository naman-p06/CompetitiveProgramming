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
long long n;
cin>>n;
string s;
cin>>s;
string t=rem(s);
long long count =0;
bool used=false;
for(long long i=0;i<t.size();i++){
 if(!used){
    if(t[i]=='1'){
        count++;
        used=true;
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