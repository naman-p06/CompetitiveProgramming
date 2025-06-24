#include <bits/stdc++.h>
using namespace std;
bool compareByValue(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<int> v(n);
for(long long i=0;i<n;i++){
 cin>>v[i];
}
if(n==1){
    cout<<1<<" "<<1<<endl;
    continue;
}
bool dance=true;
for(long long i=1;i<n;i++){
 if(v[i]!=v[0]){
    dance=false;
    break;
 }
}
if(dance){
    cout<<0<<endl;
    continue;
}
map<int,int>m;
for(long long i=0;i<n;i++){
    m[v[i]]++;
}
sort(m.begin(), m.end(), compareByValue);
// long long initial=
}
return 0;
}