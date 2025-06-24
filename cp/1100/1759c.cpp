#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long l,r,x;
    cin>>l>>r>>x;
    long long a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        continue;
    }
    if(b>a){
            if(b-a>=x){
                cout<<1<<endl;
                continue;
            }

            // else if()
    }
    else{

    }
}
return 0;
}