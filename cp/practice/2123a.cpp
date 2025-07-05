#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;

if(n<=3){
    cout<<"Alice"<<endl;
    continue;
}
if(n%4){
    cout<<"Alice"<<endl;
}
else{
    cout<<"Bob"<<endl;
}
}
return 0;
}