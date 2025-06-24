#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 998244353;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // Parent array: for vertices 2..n, p[i] is given.
        // We'll treat p[1] as 0.
        vector<int> parent(n+1, 0);
        for (int i = 2; i <= n; i++){
            cin >> parent[i];
        }
        
        // Compute depths. Root (vertex 1) has depth 0.
        vector<int> depth(n+1, 0);
        depth[1] = 0;
        int maxDepth = 0;
        for (int i = 2; i <= n; i++){
            depth[i] = depth[parent[i]] + 1;
            maxDepth = max(maxDepth, depth[i]);
        }
        
        // Group vertices by depth.
        vector<vector<int>> levels(maxDepth+1);
        for (int i = 1; i <= n; i++){
            levels[depth[i]].push_back(i);
        }
        
        // dp[v] = number of valid sequences ending at vertex v.
        vector<long long> dp(n+1, 0);
        // levelSum[d] = sum of dp[v] for all vertices v at depth d.
        vector<long long> levelSum(maxDepth+1, 0);
        
        // At depth 0, only vertex 1 exists.
        dp[1] = 1;
        levelSum[0] = 1;
        
        // For level 1: From the root, any vertex is allowed.
        if(maxDepth >= 1){
            long long sumL = 0;
            for (int v : levels[1]){
                dp[v] = 1; // valid move from root to any vertex at depth 1.
                sumL = (sumL + dp[v]) % MOD;
            }
            levelSum[1] = sumL;
        }
        
        // For levels >= 2:
        for (int d = 2; d <= maxDepth; d++){
            long long sumL = 0;
            for (int v : levels[d]){
                // Valid predecessors are all vertices at level d-1 except the parent of v.
                long long ways = (levelSum[d-1] - dp[parent[v]] + MOD) % MOD;
                dp[v] = ways;
                sumL = (sumL + ways) % MOD;
            }
            levelSum[d] = sumL;
        }
        
        // The answer is the sum of sequences ending at all vertices (all valid sequences).
        long long ans = 0;
        for (int d = 0; d <= maxDepth; d++){
            ans = (ans + levelSum[d]) % MOD;
        }
        
        cout << ans % MOD << "\n";
    }
    return 0;
}
