#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
        long long count1=0;
    for(long long i=0;i<k;i++){
        int a;
        cin>>a;
        if(a==1){
            count1++;
            int b,c;
            cin>>b>>c;
        }
        else{
            int b;
            cin>>b;
        }
    }
    long long count2=k-count1;
    long long happened=count1*2+count2;
    long long maxi=n-1-happened;
    long long mini=maxi-(maxi)/2;
    cout<<mini<<" "<<maxi<<endl;
return 0;
}