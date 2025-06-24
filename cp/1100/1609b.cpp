#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,q;
    cin>>n>>q;
    
    string s;
    cin>>s;
    vector<pair<long long,char>>v(q);
    for(long long i=0;i<q;i++){
     cin>>v[i].first>>v[i].second;
    }
    long long count=0;
    for(long long i=0;i<n-2;i++){
     if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c'){
        count++;
     }
    }
    for(long long i=0;i<q;i++){
     long long pos=v[i].first-1;
     char u=v[i].second;
     if(s[pos]=='a'){
        if(pos+2<s.size()&&s[pos+1]=='b'&&s[pos+2]=='c'){
            if(u!='a'){
                
            }
        }
        else if(pos+1<s.size()&&s[pos+1]=='c'){
            if(u=='b'){
                if(s[pos-1]=='a'){
                    count++;
                }
            }
        }
     }
    }
}
return 0;
}