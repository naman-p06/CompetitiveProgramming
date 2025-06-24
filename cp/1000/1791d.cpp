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
unordered_map <char,long long>m1,m2;
for(int i=0;i<n;i++){
 m1[s[i]]++;
}
long long cur=m1.size();
long long maxi=INT_MIN;
for(long long i=0;i<n;i++){
 char j=s[i];
 m2[j]++;
 m1[j]--;
 if(m1[j]==0){
    cur--;
 }
maxi=max(maxi,cur+m2.size());
}
cout<<maxi<<endl;
}
return 0;
}