#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long l,r;
    cin>>l>>r;
    if(r<=3){
        cout<<-1<<endl;
        continue;
    }
    if(r-l>=1&&(l==1||l==2)){
        cout<<2<<" "<<2<<endl;
        continue;
    }
    if(r-l>=1){
        if(l%2){
            cout<<(l+1)/2<<" "<<(l+1)/2<<endl;
        }
        else{
            cout<<(l)/2<<" "<<(l)/2<<endl;
        }
    }
    else{
        if(l%2==0){
            cout<<l/2<<" "<<l/2<<endl;
        }
        else{
            long long v=sqrt(l);
            bool a=false;
            long long i=2;
            for( i=2;i<=v;i++){
             if(l%i==0){
                a=true;
                break;
             }
            }
            if(a){
                cout<<l/i<<" "<<l-(l/i)<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}
return 0;
}