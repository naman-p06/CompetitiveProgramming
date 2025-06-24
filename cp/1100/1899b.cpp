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
vector<long long> fac;
for (int i = 1; i <= sqrt(n); ++i) {
    if (n % i == 0) {
        fac.push_back(i);
        if (i != n / i) { 
            fac.push_back(n / i);
        }
    }
}
long long maxi=INT_MIN;
for(long long i=0;i<fac.size();i++){
    long long k=fac[i];
    
 vector<long long> u;
 long long y=0,sum=0;
 for(long long j=0;j<n;j++){
  
   sum+=v[j];
   y++;
   if(y==k){
    u.push_back(sum);
    sum=0;
    y=0;
  }
 }
 long long mini= *min_element(u.begin(),u.end());
 long long muxi= *max_element(u.begin(),u.end());
 maxi=max(maxi,muxi-mini);
 
}
cout<<maxi<<endl;
}
return 0;
}