#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,l,r;
cin>>n;
vector<long long>v(n);
for(long long i=0;i<n;i++){
    cin>>v[i];
}
vector<long long>first,second;
for(long long i=0;i<r;i++){
    first.push_back(v[i]);
}

for(long long i=l-1;i<n;i++){
    second.push_back(v[i]);
}
sort(first.begin(),first.end());
sort(second.begin(),second.end());
long long sum1=0,sum2=0;
for(long long i=0;i<r-l+1;i++){
    sum1+=first[i];
    sum2+=second[i];
}
cout<<min(sum1,sum2)<<endl;
}
return 0;
}