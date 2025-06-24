#include <bits/stdc++.h>
using namespace std;

struct custom_compare {
    bool operator()(const pair<long long, long long>& a, const pair<long long, long long>& b) const {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first < b.first;
    }
};

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, custom_compare> maxHeap;
        for(long long i = 0; i < n; i++){
            long long temp;
            cin >> temp;
            maxHeap.push({temp%k+k, i + 1});
        }

        while(!maxHeap.empty()){
            pair<long long, long long> top = maxHeap.top();
            maxHeap.pop();
            top.first -= k;
            if(top.first <= 0){
                cout << top.second << " ";
            } else {
                maxHeap.push(top);
            }
        }
        cout << endl;
    }
    return 0;
}
