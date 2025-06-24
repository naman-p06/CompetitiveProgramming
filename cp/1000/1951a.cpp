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
if(n==1){
    if(s[0]=='0'){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else if(n==2){
    if(s[0]=='0'&&s[1]=='0'){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else if(n==3){
    if((s[0]=='0'&&s[1]=='0'&&s[2]=='0')||(s[0]=='1'&&s[1]=='0'&&s[2]=='1')){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

else{
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            count++;
        }
    }
    if(count%2){
        cout<<"NO"<<endl;
    }
    else{
        if(count>=4||count==0)
        cout<<"YES"<<endl;
        else{
            int k1=65,k2=78;
            for(int i=0;i<s.size();i++){
                if(s[i]=='1'){
                if(k1!=65){
                    k2=i;
                }
                else{
                    k1=i;
                }
                }
            }
            if(k1+1==k2){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
    }
}
}
return 0;
}