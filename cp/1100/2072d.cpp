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
int first=1,second=1;
for(long long i=0;i<n-1;i++){
    if(v[i]>v[i+1]&&((i==0||i==n-1)||v[i+1]>=v[i-1])){
        if(v[n-1]<=v[i]){
            first=i+1;
            second=n;
            break;
        }
        else{
            for(long long j=i+1;j<n;j++){
                if(v[i]>=v[j]&&(j==n-1||v[i]<=v[j+1])){
                    first=i+1;
                    second=j+1;
                    break;  
                }
            }
        }
    }
    else if(v[i]>v[i+1]){
        if(v[n-1]<=v[i]){
            first=i+1;
            second=n;
            break;
        }
        else{
        for(int j=i+1;j<n;j++){
            if(v[i]>=v[j]&&(j==n-1||v[i]<=v[j+1])){
                    first=i+1;
                    second=j+1;
                    break;  
                }
        }
        for(int j=i+1;j<n;j++){
            if(v[i]>=v[j]){
                    first=i+1;
                    second=j+1;
                    break;  
                }
        }
    }
}
}
cout<<first<<" "<<second<<endl;
}
return 0;
}