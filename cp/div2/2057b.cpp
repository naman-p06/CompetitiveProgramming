#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
map<long long,long long>countMap;
for (long long num : v) { 
    countMap[num]++; 
} 

vector<pair<long long, long long>> sortedVector(countMap.begin(), countMap.end()); 

sort(sortedVector.begin(), sortedVector.end(), [](const pair<long long, long long>& a, const pair<long long, long long>& b) { 
    return a.second > b.second; 
});
long long ans=sortedVector.size();
for(auto h :sortedVector){
    if(h.second-k>0){
        break;
    }
    else{
        k-=h.second;
        ans--;
    }
}
cout<<ans<<endl;
}
return 0;
}