#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long tot = 2 * n;
        vector<long long> v(tot);
        for(long long i = 0; i < tot; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        
        vector<long long> small, large;
        long long ssum = 0, lsum = 0;
        for(long long i = 0; i < n; i++){
            small.push_back(v[i]);
            ssum += v[i];
        }
        for(long long i = n; i < tot; i++){
            large.push_back(v[i]);
            lsum += v[i];
        }
        
        long long candidate = lsum - ssum;  // default candidate for a1
        
        // Check if candidate is in b
        bool collision = binary_search(v.begin(), v.end(), candidate);
        int swapIndex = -1;
        long long newCandidate = candidate;
        
        // If collision, try swapping one pair to adjust candidate.
        if(collision){
            for (int i = 0; i < n; i++){
                long long diff = large[n-1-i] - small[i];
                long long tempCandidate = candidate - 2LL * diff;
                if(tempCandidate > 0 && !binary_search(v.begin(), v.end(), tempCandidate)){
                    newCandidate = tempCandidate;
                    swapIndex = i;
                    break;
                }
            }
        }
        
        vector<long long> a;
        a.push_back(collision ? newCandidate : candidate);
        
        // Build the rest of the sequence.
        if(collision && swapIndex != -1){
            // For all pairs before the swap index, use default order.
            for (int j = 0; j < swapIndex; j++){
                a.push_back(large[n-1-j]);
                a.push_back(small[j]);
            }
            // For the swap index, output in swapped order.
            a.push_back(small[swapIndex]);
            a.push_back(large[n-1-swapIndex]);
            // For all pairs after the swap index, use default order.
            for (int j = swapIndex+1; j < n; j++){
                a.push_back(large[n-1-j]);
                a.push_back(small[j]);
            }
        }
        else{
            // No collision: use default pairing for all.
            for (int i = 0; i < n; i++){
                a.push_back(large[n-1-i]);
                a.push_back(small[i]);
            }
        }
        
        // Output the final sequence a (of length 2n+1).
        for(auto num : a){
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}
