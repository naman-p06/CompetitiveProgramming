#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
cin>>v[i];
int k=1;
int j=1;
int max=0;
if(v[0]==v[n-1]){
      for(int i=0;i<n-1;i++){
            if(v[i+1]==v[i])
            k++;
            else{
                  break;
            }
      }
      for(int i=n-1;i>0;i--){
            if(v[i]==v[i-1])
            j++;
            else
            break;
      }
      if(j>n/2&&k>n/2)
      cout<<0<<endl;
      else
      cout<<n-j-k<<endl;
      continue;
}
else{
      for(int i=0;i<n-1;i++){
            if(v[i+1]==v[i])
            k++;
            else
            break;
      }
      for(int i=n-1;i>0;i--){
            if(v[i]==v[i-1])
            j++;
            else
            break;
      }
      if(k>j){
            cout<<n-k<<endl;
      }
      else{
            cout<<n-j<<endl;
      }
}
}
return 0;
}