#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<long long>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
long long sum=0;
long long maxi=0;
long long ans=0;
for(int i=0;i<n;i++){

sum+=arr[i];
maxi=max(arr[i],maxi);
if(sum-maxi==maxi){
    ans++;
}
}

cout<<ans<<endl;
}
return 0;
}