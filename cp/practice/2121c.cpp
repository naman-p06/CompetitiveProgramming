#include <bits/stdc++.h>
using namespace std;
bool try1(long long ind1,long long y,vector<vector<long long>> v,long long maxi){
    for(long long i=0;i<v.size();i++){
     for(long long j=0;j<v[0].size();j++){
      if(i==ind1||j==y){
        v[i][j]--;
      }
     }
    }
    for(long long i=0;i<v.size();i++){
     for(long long j=0;j<v[0].size();j++){
      if(v[i][j]==maxi){
        return false;
      }
     }
    }
    return true;
}
int main(){
long long t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;
    vector<vector<long long>>v(n,vector<long long>(m));
    long long maxi=INT_MIN;
    for(long long i=0;i<n;i++){
     for(long long j=0;j<m;j++){
      cin>>v[i][j];
      maxi=max(maxi,v[i][j]);
     }
    }
    unordered_map<int,bool> row;
    unordered_map<int,bool> col;
    long long done=false,a=false;
    long long first=-1,second=-1;
    for(long long i=0;i<n;i++){
     for(long long j=0;j<m;j++){
      if(v[i][j]==maxi){
        if(row.empty()){
            row[i]=true;
            col[j]=true;
        }
        else if(!done){
            if(row[i]==true||col[j]==true){
                
            }
            else{
                done=true;
                // row[i]=true;
                // col[j]=true;
                first=i;
                second=j;
            }
        }
        else if(done){
           if(row[i]==true||col[j]==true){
                
            }
            else{
                
            }
        }
      }
     }
     
    }
    if(first==-1){
        cout<<maxi-1<<endl;
    }
    else{
        long long first1,second1;
        for(auto k:row){
            first1=k.first;
        }
        for(auto k:col){
            second1=k.first;
        }
        bool op=try1(first1,second,v,maxi);
        bool up=try1(first,second1,v,maxi);
        if(op||up){
            cout<<maxi-1<<endl;
        }
        else{
            cout<<maxi<<endl;
        }
    }
}
return 0;
}