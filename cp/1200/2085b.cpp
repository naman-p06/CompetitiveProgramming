#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>v(n);
    long long count0=0;

    for(long long i=0;i<n;i++){
     cin>>v[i];
     if(v[i]==0){
        count0++;
     }
    }
    if(count0==0){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else if(count0==n){
        cout<<3<<endl;
        cout<<n/2+1<<" "<<n<<endl;
        cout<<1<<" "<<n/2<<endl;
        cout<<1<<" "<<2<<endl;
    }
    else{
        if(v[n-1]!=0){
            cout<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<2<<endl;
            continue;
         }
        long long ind=1;
        for(long long i=0;i<n;i++){
         if(v[i]!=0){
            ind=i;
            break;
         }
        }
         if(ind==0){
            cout<<2<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
         }
         else if(ind+2==n){
            cout<<3<<endl;
        cout<<ind+1<<" "<<n<<endl;
        cout<<1<<" "<<ind<<endl;
        cout<<1<<" "<<2<<endl;
         }
         else {
            cout<<3<<endl;
        cout<<ind+2<<" "<<n<<endl;
        cout<<1<<" "<<ind+1<<endl;
        cout<<1<<" "<<2<<endl;
         }
        
    }
}
return 0;
}