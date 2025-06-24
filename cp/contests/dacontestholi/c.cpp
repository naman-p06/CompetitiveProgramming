#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
if(n==1){
    cout<<5<<endl;
}
else if(n==2){
    cout<<10<<endl;
}
else{
    int k=n/2;
    int j;
    if(n%2){
        j=k+1;
        cout<<j*5+k*3<<endl;
    }
    else{
        j=k+1;
        cout<<j*5+(k-1)*3<<endl;
    }
    
}
}
return 0;
}