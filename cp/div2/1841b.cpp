#include <bits/stdc++.h>
using namespace std;
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
vector<int> ans;
string s;
bool sorted=false;
for(long long i=0;i<n;i++){
    if(ans.empty()){
        ans.push_back(v[i]);
        s.push_back('1');
        sorted =true;
    }
    else if(sorted){
        if(v[i]>=ans[ans.size()-1]){
            ans.push_back(v[i]);
            s.push_back('1');
        }
        else{
            if(v[i]<=ans[0]){
                ans.push_back(v[i]);
                s.push_back('1');
                sorted=false;
            }
            else{
                s.push_back('0');
            }
        }
    }
    else if(!sorted){
        if(v[i]>=ans[ans.size()-1]&&v[i]<=ans[0]){
            ans.push_back(v[i]);
            s.push_back('1');
        }
        else{
            s.push_back('0');
        }
    }
}
cout<<s<<endl;
}
return 0;
}