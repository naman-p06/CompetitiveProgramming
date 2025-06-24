#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int m;
        cin>>m;
        vector<string> s(m);
        for(int i=0;i<m;i++){
            cin>>s[i];
        }
        map<int,char>mt;
        map<char,int>yt;
        for(int i=0;i<m;i++){
            mt.clear();
            yt.clear();
            int length=s[i].size();
            if(n!=length){
                cout<<"NO"<<endl;
                continue;
            }
            int l=0;
            for(int j=0;j<n;j++){
                if(mt.find(arr[j])==mt.end()){
                    mt[arr[j]]=s[i][j];
                }
                else{
                    if(s[i][j]!=mt[arr[j]]){
                        cout<<"NO"<<endl;
                        l=1;
                        break;
                    }
                }
            }
            if(l)
            continue;
            int h=0;
            for(int j=0;j<n;j++){
                if(yt.find(s[i][j])==yt.end()){
                    yt[s[i][j]]=arr[j];
                }
                else{
                    if(arr[j]!=yt[s[i][j]]){
                        cout<<"NO"<<endl;
                        h=1;
                        break;
                    }
                }
            }
            if(h==1)
            continue;

            cout<<"YES"<<endl;
            
        }
    }
    return 0;
}