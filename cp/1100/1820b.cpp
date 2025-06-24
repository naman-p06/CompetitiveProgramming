#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
string s;
cin>>s;
long long counet=0;
for(long long i=0;i<s.size();i++){
    if(s[i]=='1')
    counet++;
}
long long k=s.size();
if(counet==s.size()){
    cout<<k*k<<endl;
    continue;
}
s=s+s;
vector<long long>ans;
long long count=0,maxi=0;
long long n=s.size()/2;
for (long long i = 0; i < s.size(); i++) {
    if (s[i] == '1') {
        count++;
        if (count > n) count = n; 
        maxi = max(maxi, count);
    } else {
        count = 0;
    }
}

ans.clear();
for(long long i=1;i<=maxi;i++){
 ans.push_back(i*(maxi--));
}
maxi=0;
for(long long i=0;i<ans.size();i++){
 maxi=max(maxi,ans[i]);
}
cout<<maxi<<endl;
}
return 0;
}