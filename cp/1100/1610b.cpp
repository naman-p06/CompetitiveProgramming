#include <bits/stdc++.h>
using namespace std;
bool check(vector<long long>& a){
    if(a.empty())
    return true;
    long long i=0,j=a.size()-1;
    bool m=false;
    while(i<j){
        if(a[i]!=a[j]){
            m=true;
            break;
        }
        i++;
        j--;
    }
    if(m)
    return false;
    return true;
}
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
    long long s=0,e=n-1;
    long long ind=-1;
    // long long first,second;
    while(s<e){
        if(v[s]!=v[e]){
           ind=1;
           break;
        }
        else{
            s++;
            e--;
        }
    }
    if(ind==-1){
        cout<<"YES"<<endl;
        continue;
    }
    long long first=v[s],second=v[e];
    vector<long long> ch,vh;
    for(long long i=0;i<n;i++){
     if(v[i]!=first)
     ch.push_back(v[i]);
    }
    bool a=check(ch);
    for(long long i=0;i<n;i++){
        if(v[i]!=second)
        vh.push_back(v[i]);
    }
    bool u=check(vh);
    if(u||a)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
return 0;
}