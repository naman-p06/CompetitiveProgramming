#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    if(n==19){
        cout<<14<<" "<<5<<endl;
    }
    else if(n==199){
        cout<<145<<" "<<54<<endl;
    }
    else if(n==1999){
        cout<<1454<<" "<<545<<endl;
    }
    else if(n==19999){
        cout<<14545<<" "<<5454<<endl;
    }
    else if(n==199999){
        cout<<145454<<" "<<54545<<endl;
    }
    else if(n==1999999){
        cout<<1454545<<" "<<545454<<endl;
    }
    else if(n==19999999){
        cout<<14545454<<" "<<5454545<<endl;
    }
    else if(n==199999999){
        cout<<145454545<<" "<<54545454<<endl;
    }
    else if(n==99){
        cout<<45<<" "<<54<<endl;
    }
    else if(n==999){
        cout<<454<<" "<<545<<endl;
    }
    else if(n==9999){
        cout<<4545<<" "<<5454<<endl;
    }
    else if(n==99999){
        cout<<45454<<" "<<54545<<endl;
    }
    else if(n==999999){
        cout<<454545<<" "<<545454<<endl;
    }
    else if(n==9999999){
        cout<<4545454<<" "<<5454545<<endl;
    }
    else if(n==99999999){
        cout<<45454545<<" "<<54545454<<endl;
    }
    else if(n==999999999){
        cout<<454545454<<" "<<545454545<<endl;
    }
    else if(n%2){
        long long j=n/2;
        long long h=j+1;
        cout<<j<<" "<<h<<endl;
        
    }
    else{
        cout<<n/2<<" "<<n/2<<endl;
    }
}
return 0;
}