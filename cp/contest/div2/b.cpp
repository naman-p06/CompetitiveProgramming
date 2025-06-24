#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

struct Lamp {
    int x, y, r;
};

bool canReach(vector<Lamp>& lamps, int M, int N) {
    // Create adjacency list for graph
    vector<vector<int>> adj(N);
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int dx = lamps[i].x - lamps[j].x;
            int dy = lamps[i].y - lamps[j].y;
            int dist_sq = dx * dx + dy * dy;
            int r_sum = lamps[i].r + lamps[j].r;
            if (dist_sq <= r_sum * r_sum) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    // BFS to check if we can reach from any lamp covering x=0 to any lamp covering x=M
    queue<int> q;
    vector<bool> visited(N, false);

    // Enqueue all lamps covering x=0
    for (int i = 0; i < N; ++i) {
        if (lamps[i].x - lamps[i].r <= 0) {
            q.push(i);
            visited[i] = true;
        }
    }

    // Perform BFS
    while (!q.empty()) {
        int u = q.front();
        q.pop();

        // Check if this lamp covers x=M
        if (lamps[u].x + lamps[u].r >= M) {
            return true;
        }

        // Visit all neighbors
        for (int v : adj[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        vector<Lamp> lamps(N);
        for (int i = 0; i < N; ++i) {
            cin >> lamps[i].x >> lamps[i].y >> lamps[i].r;
        }

        if (canReach(lamps, M, N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
