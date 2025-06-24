#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long> d(n),a(n);
    for(long long i=0;i<n;i++){
        cin>>d[i];
    }
    a[0]=d[0];
    bool ab=false;
    for(long long i=1;i<n;i++){
     if(a[i-1]-d[i]<0||d[i]==0){
        a[i]=a[i-1]+d[i];
     }
     else{
        ab=true;
        break;
     }
    }
    if(ab){
        cout<<-1<<endl;
    }
    else{
        for(long long i=0;i<n;i++){
         cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}