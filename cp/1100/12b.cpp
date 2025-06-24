#include <bits/stdc++.h>
using namespace std;
int main(){
// long long t;
// cin>>t;
// while(t--){
    string s,s2;
    cin>>s>>s2;
    
    int n=s.size();
    int mini=s[0]-'0';
    int ind=0;
    for(long long i=0;i<n;i++){
     if(s[i]-'0'<mini&&s[i]-'0'!=0){
        mini=s[i]-'0';
        ind=i;
     }
    }
    string ans;
    
    for(long long i=0;i<n;i++){
     if(i!=ind){
        ans.push_back(s[i]);
     }
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    ans.push_back(mini+'0');
    reverse(ans.begin(),ans.end());
    // cout<<ans<<" "<<s2<<endl;
    if(ans==s2){
        cout<<"OK"<<endl;
    }
    else{
        cout<<"WRONG_ANSWER"<<endl;
    }
// }
return 0;
}