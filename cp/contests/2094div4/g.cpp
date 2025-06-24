#include <bits/stdc++.h>
using namespace std;
long long  fin=0;
void calculate(vector<long long>&v){
    long long sum=0;
    for(long long i=0;i<v.size();i++){
     sum+=(i+1)*v[i];
    }
    fin=sum;
    cout<<sum<<endl;
}
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>v;
    while(n--){
        long long a;
        cin>>a;
        if(a==3){
            long long b;
            cin>>b;
            v.push_back(b);
            if(fin!=0){
                fin=fin+(v.size())*b;
                cout<<fin<<endl;
            }
            else
            calculate(v);
        }
        else if(a==1){
            long long u=v[v.size()-1];
            v.pop_back();
            reverse(v.begin(),v.end());
            v.push_back(u);
            reverse(v.begin(),v.end());
            calculate(v);
        }
        else{
            reverse(v.begin(),v.end());
            calculate(v);
        }
    }
}
return 0;
}