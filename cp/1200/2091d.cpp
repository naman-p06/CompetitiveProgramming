#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,m,k;
    cin>>n>>m>>k;
    long long max;
    if(k%n){
        max=k/n+1;
    }
    else{
        max=k/n;
    }

    long long i=1,j=max;
    long long ans=max;
    while(i<=j){
        long long mid=i+(j-i)/2;
        long long ind=m/(mid+1);
        ind*=mid;
        if(m%(mid+1)){
            ind+=m%(mid+1);
        }
        if(max<=ind){
            ans=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    cout<<ans<<endl;
}
return 0;
}