#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long> a(n),b(n);
    for(long long i=0;i<n;i++){
     cin>>a[i];
    }
    for(long long i=0;i<n;i++){
     cin>>b[i];
    }
    long long first=0,second=n-1;
    for(long long i=0;i<n;i++){
     if(a[i]==b[i]){

     }
     else{
        first=i;
        break;
     }
    }
    for(long long i=n-1;i>=0;i--){
     if(a[i]==b[i]){

     }
     else{
        second=i;
        break;
     }
    }
    // cout<<first<<" "<<second<<endl;
    long long mini=b[first],maxi=b[second];
    long long k=first,y=second;
    while(k>0&&b[k-1]<=b[k]){
        first--;
        k--;
    }
    while(y+1<n&&b[y+1]>=b[y]){
        second++;
        y++;
    }
    cout<<first+1<<" "<<second+1<<endl;
}
return 0;
}