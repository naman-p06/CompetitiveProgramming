#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    vector<long long>v(4);
    long long mini= 1e9+1;
    for(long long i=0;i<4;i++){
     cin>>v[i];
     mini=min(mini,v[i]);
    }
    long long count=0;
    for(long long i=0;i<4;i++){
     if(v[i]==mini){
        count++;
     }
    }
    if(count<=1){
        if(v[0]==mini||v[2]==mini){
            cout<<"Flower"<<endl;
        }
        else{
            cout<<"Gellyfish"<<endl;
        }
    }
    else if(count>=3){
            cout<<"Gellyfish"<<endl;

    }
    else{
        if(v[0]==mini&&v[2]==mini){
            cout<<"Flower"<<endl;
        }
        else if(v[1]==mini&&v[3]==mini){
            cout<<"Gellyfish"<<endl;
        }
        else{
                        cout<<"Gellyfish"<<endl;

        }
    }
}
return 0;
}