#include <bits/stdc++.h>
using namespace std;
 
// We use Dijkstra’s algorithm on the state space
// A state is a pair (v1, v2), where v1 is a vertex in graph1 and v2 in graph2.
// From state (v1, v2), for every edge (v1, u1) in graph1 and every edge (v2, u2) in graph2,
// we can go to state (u1, u2) at an additional cost of |u1 - u2|.
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n, s1, s2;
        cin >> n >> s1 >> s2;
 
        // Read graph 1
        int m1;
        cin >> m1;
        vector<vector<int>> g1(n+1);
        for (int i = 0; i < m1; i++){
            int a, b;
            cin >> a >> b;
            g1[a].push_back(b);
            g1[b].push_back(a);
        }
 
        // Read graph 2
        int m2;
        cin >> m2;
        vector<vector<int>> g2(n+1);
        for (int i = 0; i < m2; i++){
            int a, b;
            cin >> a >> b;
            g2[a].push_back(b);
            g2[b].push_back(a);
        }
 
        // Precompute F = { v in [1, n] such that v has at least one neighbor common to both graphs }.
        // In a state (v,v), if v ∈ F then a move with cost 0 is available
        // (since there exists some u with u ∈ g1[v] and u ∈ g2[v]), and then the tokens can
        // cycle forever with no additional cost.
        vector<bool> inF(n+1, false);
        for (int v = 1; v <= n; v++){
            unordered_set<int> nei;
            for (int u : g1[v])
                nei.insert(u);
            for (int u : g2[v]){
                if(nei.find(u) != nei.end()){
                    inF[v] = true;
                    break;
                }
            }
        }
 
        // We now run Dijkstra on the state space of pairs (v1, v2).
        // There are n*n states; we use a 2D array 'dist' to store the best cost to reach (v1,v2).
        const int INF = 1e9;
        vector<vector<int>> dist(n+1, vector<int>(n+1, INF));
        // Priority queue: (cost, v1, v2)
        typedef tuple<int,int,int> State;
        priority_queue<State, vector<State>, greater<State>> pq;
 
        dist[s1][s2] = 0;
        pq.push({0, s1, s2});
 
        while(!pq.empty()){
            auto [d, v1, v2] = pq.top();
            pq.pop();
            if(d != dist[v1][v2]) continue;
 
            // From state (v1,v2) try every allowed move.
            for (int u1 : g1[v1]){
                for (int u2 : g2[v2]){
                    int nd = d + abs(u1 - u2);
                    if(nd < dist[u1][u2]){
                        dist[u1][u2] = nd;
                        pq.push({nd, u1, u2});
                    }
                }
            }
        }
 
        // The answer is the minimum cost to reach any state (v,v) with v ∈ F.
        int ans = INF;
        for (int v = 1; v <= n; v++){
            if(inF[v])
                ans = min(ans, dist[v][v]);
        }
 
        if(ans == INF)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
    return 0;
}