#include <bits/stdc++.h>
using namespace std;
int main(){
 long long n;
 cin>>n;
 string s;
 cin>>s;
 bool a=false;
 for(int i=0;i<n-1;i++){
    if(s[i]>s[i+1]){
        a=true;
        swap(s[i],s[i+1]);
        cout<<"YES"<<endl;
        cout<<i+1<<" "<<i+2<<endl;
        break;
    }
 }
 if(!a)
 cout<<"NO"<<endl;
return 0;
}