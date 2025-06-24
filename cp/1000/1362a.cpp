#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long p,b;
    cin>>p>>b;
    if(p==b){
    cout<<0<<endl;
        continue;
    }
    long long maxi,mini;
    maxi=max(p,b);
    mini=min(p,b);
    if(maxi%mini){
        cout<<-1<<endl;
        continue;
    }
    long long q=maxi/mini;
    long long count=0;
    bool a=false;
    while(q/8!=0){
        count++;
        if(q%8){
            a=true;
            break;
        }
        q=q/8;
        
    }
    if(a){
        cout<<-1<<endl;
        continue;
    }
    if(q%8==4||q%8==2){
        count++;
        cout<<count<<endl;
    }
    else if(q%8==1){
        cout<<count<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
return 0;
}