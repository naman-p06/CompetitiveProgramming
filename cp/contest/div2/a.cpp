#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>a(n),b(n);
for(long long i=0;i<n;i++){
 cin>>a[i];
}
for(long long i=0;i<n;i++){
    cin>>b[i];
}
long long sum=a[n-1];
for(long long i=0;i<n-1;i++){
 if(a[i]-b[i+1]>0){
    sum+=a[i]-b[i+1];
 }
}
cout<<sum<<endl;
}
return 0;
}