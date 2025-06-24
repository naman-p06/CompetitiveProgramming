#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
string s1,s2;
cin>>s1>>s2;
int count1=0,count0=0;
for(int i=0;i<n;i++){
    if(s1[i]=='1')
    count1++;
    else{
        count0++;
    }
}
if(count0==0||count1==0){
    cout<<"NO"<<endl;
    continue;
}
bool flag=false;
for(int i=0;i<n-1;i++){
    count0--;
    count1--;
    if(s2[i]=='1')
    count1++;
    else{
        count0++;
    }
    if((count0==0||count1==0)&&(count1+count0>1)){
        flag=true;
        break;
    }
}
if(flag){
     cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}