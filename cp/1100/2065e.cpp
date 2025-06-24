#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,m,k;
cin>>n>>m>>k;
if(max(n,m)-min(n,m)>k){
cout<<-1<<endl;
}
else if(k>max(n,m)){
    cout<<-1<<endl;
}
else{
    string ans;
    long long h=max(n,m);
    if(h==n){
        string s;
        n=n-k;
        while(m!=0){
            s.push_back('1');
            m--;
            if(n>0){
                s.push_back('0');
                n--;
            }
        }
        reverse(s.begin(),s.end());
        ans+=s;
        while(k--){
            ans.push_back('0');
        }
    }
    else{
        string s;
        m=m-k;
        while(n!=0){
            s.push_back('0');
            n--;
            if(m>0){
                s.push_back('1');
                m--;
            }
        }
        reverse(s.begin(),s.end());
        ans+=s;
        while(k--){
            ans.push_back('1');
        }
    }
    cout<<ans<<endl;
}
}
return 0;
}