#include <bits/stdc++.h>
using namespace std;
long long mod(long long k){
    if(k>0){
        return k;
    }
    else{
        return k*-1;
    }
}
int main(){
long long t;
cin>>t;
while(t--){
string s1,s2;
cin>>s1>>s2;
long long i=0;
long long ans=0;
long long prev=0;
int k=0;
if(s1.size()!=s2.size()){
    long long diff=s2.size()-s1.size();
    for(i;i<diff;i++){
        if(s2[i]-'0'>1||prev>=1){
            if(prev>=1){
            
            ans+=9*(s2.size()-i);
            cout<<ans<<endl;
            k=1;
            break;
        }
        else{
            ans+=(s2[i]-'0');
            i++;
            ans+=9*(s2.size()-i);
            cout<<ans<<endl;
            k=1;
            break;
        }
        }
        else{
            ans+=s2[i]-'0';
            prev=s2[i]-'0';
        }
    }
}
if(k){
    continue;
}
for(i;i<s2.size();i++){
    if(mod((s2[i]-'0')-(s1[i]-'0'))>1||prev>=1){
        if(prev>=1){
            
            ans+=9*(s2.size()-i);
            cout<<ans<<endl;
            k=1;
            break;
        }
        else{
            ans+=(s2[i]-'0')-(s1[i]-'0');
            i++;
            ans+=9*(s2.size()-i);
            cout<<ans<<endl;
            k=1;
            break;
        }
        }
        else{
            ans+=(s2[i]-'0')-(s1[i]-'0');
            prev=(s2[i]-'0')-(s1[i]-'0');
        }
}
if(k){
    continue;
}
cout<<ans<<endl;
}
return 0;
}