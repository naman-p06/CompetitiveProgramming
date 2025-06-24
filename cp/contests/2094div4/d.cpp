#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
string p,s;
cin>>p>>s;
long long i=0,j=0;
bool a=false;
while(i<p.size()){
    if(p[i]!=s[j]){
        cout<<"NO"<<endl;
        a=true;
        break;
    }
    long long countp=1;
    while(i+1<p.size()&&p[i+1]==p[i]){
        countp++;
        i++;
    }
    long long counts=1;
    while(j+1<s.size()&&s[j+1]==s[j]){
        counts++;
        j++;
    }
    if(counts>=countp&&counts<=2*countp){

    }
    else{
        cout<<"NO"<<endl;
        a=true;
        break;
    }
    j++;
    i++;
}
if(a)
continue;
if(j==s.size())
cout<<"YES"<<endl;
else{
    cout<<"NO"<<endl;
}
}
return 0;
}