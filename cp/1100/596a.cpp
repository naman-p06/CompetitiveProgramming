#include <bits/stdc++.h>
using namespace std;
bool check(pair<int,int>&v1,pair<int,int>&v2){
    if(v1.first==v2.first||v1.second==v2.second){
        return true;
    }
    return false;
}
int main(){
 long long n;
 cin>>n;
 vector<pair<int,int>> v(n);
 for(long long i=0;i<n;i++){
  cin>>v[i].first>>v[i].second;
 }
 if(n==1){
    cout<<-1<<endl;
    
 }
 else{
        if(n==2){
            if(v[0].first==v[1].first||v[0].second==v[1].second){
                cout<<-1<<endl;
                // continue;
            }
            else{
                cout<<abs(v[0].first-v[1].first)*abs(v[0].second-v[1].second)<<endl;
            }
        }
        else if(n==3){
            if(check(v[0],v[1])&&check(v[0],v[2])){
                cout<<abs(v[2].first-v[1].first)*abs(v[2].second-v[1].second)<<endl;
            }
            else if(check(v[0],v[1])){

                cout<<abs(v[0].first-v[2].first)*abs(v[0].second-v[2].second)<<endl;
            }
            else{
                cout<<abs(v[0].first-v[1].first)*abs(v[0].second-v[1].second)<<endl;
            }
        }
        else{
            if(check(v[0],v[1])){
                if(check(v[0],v[2])){
                    cout<<abs(v[0].first-v[3].first)*abs(v[0].second-v[3].second)<<endl;
                }
                else{
                    cout<<abs(v[0].first-v[2].first)*abs(v[0].second-v[2].second)<<endl;
                }
            }
            else{
                cout<<abs(v[0].first-v[1].first)*abs(v[0].second-v[1].second)<<endl;
            }
        }
        
 }


return 0;
}