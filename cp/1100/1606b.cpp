#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    long long count=0;
    n=n-1;
    long long cur=1;

    while(n>0&&cur<k){
        n=n-cur;
        if(cur*2>=k){
            cur=k;
            count++;
            break;
        }
        else{
            cur=cur*2;
        }
        count++;
    }
    if(n%k&&n>0)
    count+=n/k+1;
    else if(n>0){
        count+=n/k;
    }
    cout<<count<<endl;
}
return 0;
}