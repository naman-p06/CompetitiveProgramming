#include <bits/stdc++.h>
using namespace std;
int main(){
 long long n;
 cin>>n;
 long long tar=n/2;
 if(n%2){
    tar++;
 }
//  tar2=n-tar;
 long long i=1,j=n;
 while(i<=tar&&j>tar){
    cout<<i<<" ";
    i++;
    cout<<j<<" ";
    j--;
 }
 while(i<=tar){
    cout<<i<<" ";
    i++;
 }
return 0;
}