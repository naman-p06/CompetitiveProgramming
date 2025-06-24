#include <bits/stdc++.h>
using namespace std;
int main(){

    long long nx,bx;
    cin>>nx>>bx;
    vector<long long>v1(nx);
    for(long long i=0;i<nx;i++){
     cin>>v1[i];
    }
    long long ny,by;
    cin>>ny>>by;
    vector<long long>v2(ny);
    for(long long i=0;i<ny;i++){
     cin>>v2[i];
    }
    long long first=0,second=0;
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    for(long long i=0;i<nx;i++){
     first+=(v1[i]*pow(bx,i));
    }
    
    for(long long i=0;i<ny;i++){
        second+=(v2[i]*pow(by,i));
       }
    //    cout<<first<<" "<<second<<endl;

       if(first<second){
        cout<<'<'<<endl;
       }
       else if(first>second){
        cout<<'>'<<endl;
       }
       else{
        cout<<'='<<endl;
       }

return 0;
}