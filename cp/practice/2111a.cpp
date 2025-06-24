#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long x;
    cin>>x;
    long long ind=1;
    for(long long i=0;i<45;i++){
     if(x<pow(2,i)){
        ind=i;
        break;
     }
    }
    cout<<2*ind+1<<endl;
}
return 0;
}