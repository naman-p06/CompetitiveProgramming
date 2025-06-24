#include <bits/stdc++.h>
using namespace std;
int main(){
 int b,g,n;
 cin>>b>>g>>n;
 if(b>=n&&g>=n){
    cout<<n+1<<endl;
 }
 else if(b>=n &&g<n){
    cout<<g+1<<endl;
 }
 else if(b<n&&g>=n){
    cout<<b+1<<endl;
 }
 else{
    cout<<b+g-n+1<<endl;
 }
return 0;
}