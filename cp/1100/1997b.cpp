#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<string>v(2,string(n,' '));
for(int i=0;i<2;i++){
    cin>>v[i];
}
long long count=0;
for(int i=0;i<n;i++){
if(i+2<n&&v[0][i]=='x'&&v[0][i+1]=='.'&&v[0][i+2]=='x'){
    if(v[1][i]=='.'&&v[1][i+1]=='.'&&v[1][i+2]=='.'){
        count++;
    }

}
else if (i+2<n&&v[1][i]=='x'&&v[1][i+1]=='.'&&v[1][i+2]=='x')
{
    if(v[0][i]=='.'&&v[0][i+1]=='.'&&v[0][i+2]=='.'){
        count++;
    }
}
}
cout<<count<<endl;
}
return 0;
}