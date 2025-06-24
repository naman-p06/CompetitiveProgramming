#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 vector<int> a,b;
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 for(int i=0;i<n;i++){
    cin>>b[i];
 }
 if(a==b){
    cout<<"Bob"<<endl;
    continue;
 }
reverse(b.begin(),b.end());
if(a==b){
    cout<<"Bob"<<endl;
}
else{
    cout<<"Alice"<<endl;
}
}
return 0;
}