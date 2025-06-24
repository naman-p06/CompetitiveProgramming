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
sort(v.begin(),v.end());
long long dup=-1;
for(long long i=0;i<n-1;i++){
    if(v[i]==v[i+1]){
        if(v[i]>dup){
            dup=v[i];
        }
    }
}
if(dup==-1){
    cout<<-1<<endl;
    continue;
}
long long diff=INT_MAX,first,second;
bool came=false;
long long initial=-1;
long long i=0;
for( i=0;i<n;i++){
    if(v[i]==dup&&i==0){
        i++;
        came=true;
    }
    else if(i+1<n&&v[i+1]==dup){
        if(v[i]==dup){
            if(!came){
                i++;
            }
            else{
                diff=0;
                first=dup;
                second=dup;
                break;
            }
        }
        else{
            initial=v[i];
            i+=2;
            came=true;
        }
    }
    else{
        if(initial!=-1){
            if(v[i]-initial<diff){
                first=initial;
                second=v[i];
                diff=v[i]-initial;
                initial=-1;
            }
        }
        if(i+1<n&&v[i+1]-v[i]<diff){
            first=v[i];
            second=v[i+1];
            diff=v[i+1]-v[i];
        }
    }
}
if(2*dup+min(first,second)>max(first,second))
cout<<dup<<" "<<dup<<" "<<first<<" "<<second<<endl;
else
cout<<-1<<endl;
}
return 0;
}