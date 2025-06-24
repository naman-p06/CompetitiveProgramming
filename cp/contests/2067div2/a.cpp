#include <bits/stdc++.h>
using namespace std;

int main(){
long long t;
cin>>t;
while(t--){
int x,y;
cin>>x>>y;
if((y-x)==1){
    cout<<"YES"<<endl;
}
else if(x%9==0&&y==1){
cout<<"YES"<<endl;
}
else if(x-y ==17 ||x-y==8){
    cout<<"YES"<<endl;
}
else if(x-y>0&&((x-y)-8)%9==0){
cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}

return 0;
}