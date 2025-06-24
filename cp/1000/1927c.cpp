#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        map<int,bool> mark;
        map<int, vector<char>> mp;
        for(int i = 0; i < n; i++) {
            if(!mark[a[i]])
            mp[a[i]].push_back('a');
            mark[a[i]]=true;
        }
        mark.clear();
        for(int i = 0; i < m; i++) {
            if(!mark[b[i]])
            mp[b[i]].push_back('b');
            mark[b[i]]=true;

        }
        int count_a = 0, count_b = 0,t=0;
        for(int i = 1; i <= k; i++) {
            if(mp.find(i) != mp.end()) {
                for(char c : mp[i]) {
                    if(mp[i].size()==1){
                        if(c == 'a') count_a++;
                        else if(c == 'b') count_b++;
                    }
                }
            }
            else{
                cout<<"NO"<<endl;
                t=1;
                break;
            }
        }
        if(t)
        continue;
        if(count_a>k/2 || count_b>k/2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}
