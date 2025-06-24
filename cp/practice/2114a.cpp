#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int a=stoi(s);
    float u=sqrt(a);
    int v=u;
    if(v*v==a){
        cout<<0<<" "<<v<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
return 0;
}