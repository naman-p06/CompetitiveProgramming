#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
if(n<=4){
    cout<<-1<<endl;
}
else{
    for(int i=1;i<=n;i++){
        if(i!=5){
            if(i%2){
                cout<<i<<" ";
            }
        }
    }
    cout<<5<<" "<<4<<" ";
    for(int i=1;i<=n;i++){
        if(i!=4){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }
}
cout<<endl;
}
return 0;
}