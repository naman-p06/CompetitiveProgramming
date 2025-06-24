#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
vector<int> ma(m),q(k);
for(int i=0;i<m;i++)
cin>>ma[i];
for(int i=0;i<k;i++)
cin>>q[i];
if(n==k){
    for(int i=0;i<m;i++){
        cout<<'1';
    }
}
else if(n-k>=2){
    for(int i=0;i<m;i++){
        cout<<'0';
    }
}
else{
    map<int,bool>mt;
    for(int i=0;i<k;i++){
        mt[q[i]]=true;
    }
    for(int i=0;i<m;i++){
        if(!mt[ma[i]]){
            cout<<'1';
        }
        else{
            cout<<'0';
        }
    }
}
cout<<endl;
}
return 0;
}