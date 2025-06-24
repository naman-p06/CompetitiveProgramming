#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;

if(n>=5){
    cout<<2<<" ";
    int count=1;
    for(int i=4;i<=n;i++){
        if(count==(n)/2){
            cout<<1<<" ";
        }
        
            cout<<i<<" ";
            count++;
        
        
    }
    cout<<3<<endl;
}
else{
    if(n==3){
        cout<<2<<" "<<1<<" "<<3<<endl;
    }
    else if(n==4){
        cout<<2<<" "<<1<<" "<<4<<" "<<3<<endl;
    }
    else if(n==1){
        cout<<1<<endl;
    }
    else{
        cout<<2<<" "<<1<<endl;
    }
}

}
return 0;
}