#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
cin>>v[i];
for(int i=0;i<n;i++){
    if(v[i]==n){
        cout<<1<<" ";
    }
    else{
        cout<<v[i]+1<<" ";
    }
}
cout<<endl;
}
return 0;
}