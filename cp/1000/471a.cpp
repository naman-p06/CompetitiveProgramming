#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<long long>v(6);
  map<int,int>m;
  for(long long i=0;i<6;i++){
   cin>>v[i];
  }
  for(long long i=0;i<6;i++){
   m[v[i]]++;
  }
  if(m.size()==1){
    cout<<"Elephant"<<endl;
  }
  else if(m.size()>3){
    cout<<"Alien"<<endl;
  }
  else if(m.size()==3){
    pair<long long,long long> a,b,c;
    int i=0;
    for( auto t:m){
        if(i==0){
            a.first=t.first;
            a.second=t.second;
        }
        if(i==1){
            b.first=t.first;
            b.second=t.second;
        }
        if(i==2){
            c.first=t.first;
            c.second=t.second;
        }
        i++;
    }
    if(a.second!=4&&b.second!=4&&c.second!=4){
        cout<<"Alien"<<endl;
    }
    else{
        cout<<"Bear"<<endl;
    }
  }
  else{
    pair<long long,long long> a,b;
    int i=0;
    for( auto t:m){
        if(i==0){
            a.first=t.first;
            a.second=t.second;
        }
        if(i==1){
            b.first=t.first;
            b.second=t.second;
        }
        i++;
    }
    if(a.second==5||b.second==5){
        cout<<"Bear"<<endl;
    }
    else if(b.second==3||a.second==3){
        cout<<"Alien"<<endl;
    }
    else{
        cout<<"Elephant"<<endl;
    }
  }
return 0;
}