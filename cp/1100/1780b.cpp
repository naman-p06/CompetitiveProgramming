#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long> v(n);
    long long sum=0;
    for(long long i=0;i<n;i++){
     cin>>v[i];
     sum+=v[i];
    }
    if(sum%2==0){
        cout<<sum/2<<endl;
    }
    else{
        long long k=sum;
        for(long long i=3;i<=n;i++){
         if(sum%i==0){
            k=i;
            break;
         }
        }
        cout<<sum/k<<endl;
    }

}
return 0;
}