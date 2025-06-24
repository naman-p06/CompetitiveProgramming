#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++)
cin>>n;
int k=-1;;
for(int i=0;i<n-1;i++){
    if(a[i]!=0){
        k=a[i];
    a[i]=0;
    a[i+1]-=2*k;
    a[i+2]-=k;
    }
}
for(int i=0;i<n;i++){
    if(a[i]>0 || a[i]<0){
    cout<<"NO"<<endl;continue;}
}
cout<<"YES"<<endl;
}
return 0;
}