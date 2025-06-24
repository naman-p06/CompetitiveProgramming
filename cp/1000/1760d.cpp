#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n);
for(long long i=0;i<n;i++){
cin>>v[i];
}
long long count=0;
int left=0,right=0;
for(long long i=0;i<n;i++){
    if(i==0){
        if(v[i+1]>v[i]){
            count++;
        }
    }
    if(i==n-1){
        if(v[i-1]>v[i]){
            count++;
        }
        break;
    }
    else if(v[i]<v[i-1]){
        left=1;
    }
    else if(left&&!right){
        if(v[i]!=v[i-1])
        left=0;
    }
    if(left&&v[i+1]>v[i]){
        left=0;
        right=0;
        count++;
    }
}
}
return 0;
}