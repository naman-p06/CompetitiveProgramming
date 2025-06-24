#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>v(n),ans;
for(long long i=0;i<n;i++){
 cin>>v[i];
}
for(long long i=1;i<=n;i++){
    long long count=0;
    long long left=0,right=n-1;
    long long ind=-1;
    while(left<=right){
        long long mid=(left)+(right-left)/2;
        if(v[mid]>=i){
            ind=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(ind!=-1)
    count=ind+1;
    ans.push_back(count);
}
bool a=false;
for(long long i=0;i<n;i++){
 if(ans[i]!=v[i]){
    a=true;
    break;
 }
}
if(a){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}