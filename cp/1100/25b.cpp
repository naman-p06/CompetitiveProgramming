#include <bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
string s;
cin>>s;
string ans;
long long co=n/2-1;
int count=0;
int v=0;
for(int i=0;i<n;i++){
    if(count==2&&v<co){
        count=0;
        ans.push_back('-');
        v++;
    }
    count++;
    ans.push_back(s[i]);
}
cout<<ans<<endl;
return 0;
}