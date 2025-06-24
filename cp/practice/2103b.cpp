#include <bits/stdc++.h>
using namespace std;
string ren(string s) {
    int n = s.size();
    bool reversed = false;

    for (int i = 0; i < n - 1 && !reversed; ++i) {
        if (s[i] == '1' && s[i + 1] == '0') {
            int start = i;

            // Move backward to include all previous 1's
            while (start > 0 && s[start - 1] == '1') {
                start--;
            }

            int end = i + 1;

            // Move forward to include all following 0's
            while (end + 1 < n && s[end + 1] == '0') {
                end++;
            }

            // Reverse the substring from start to end
            reverse(s.begin() + start, s.begin() + end + 1);
            reversed = true;
        }
    }

    return s;
}
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    s=ren(s);
    // cout<<s<<endl;
    long long count=0;
    if(s[0]=='1')
    count++;
    for(long long i=0;i<n-1;i++){
     
     if(s[i]=='1'&&s[i+1]=='0'){
        count++;
     }
     if(s[i]=='0'&&s[i+1]=='1')
     count++;
    }
    cout<<n+count<<endl;
}
return 0;
}