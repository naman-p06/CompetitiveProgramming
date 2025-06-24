#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;
    vector<long long>l(m),w(m),h(m);
    for(long long i=0;i<m;i++){
     cin>>w[i]>>l[i]>>h[i];
    }
    vector<long long>v(n+1);
    v[1]=1;
    v[2]=2;
    for(int i=3;i<=n;i++){
        v[i]=v[i-1]+v[i-2];
    }
    string ans;
    for(long long i=0;i<m;i++){
        long long first=v[n];
        long long second=v[n-1];
        if(l[i]>=first&&w[i]>=first&&h[i]>=first){
            if(first+second<=l[i]||first+second<=w[i]){
            ans.push_back('1');

            }
            else{
                if(second+first<=h[i]){
            ans.push_back('1');

                }
                else
                {
            ans.push_back('0');
                    
                }
            }
        }
        else{
            ans.push_back('0');
        }
    }
    cout<<ans<<endl;
}
return 0;
}