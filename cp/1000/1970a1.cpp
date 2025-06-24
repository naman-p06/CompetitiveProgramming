#include <bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;
 int pre=0;
 map<int,int> m;
 for(int i=0;i<s.size();i++){
    m[i]=pre;
    if(s[i]=='(')
    pre++;
    else{
        pre--;
    }
 }
 string t;
 vector<pair<int, int>> vec(m.begin(), m.end());
sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second)
        return a.first > b.first; 
    return a.second < b.second;
});

for(auto &pair:vec){
    t.push_back(s[pair.first]);
}
cout<<t<<endl;
return 0;
}