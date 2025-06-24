#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct Cell {
    int x, y;
    Cell(int x, int y) : x(x), y(y) {}
};

// Check if two cells are strangers (don't share a side)
bool areStrangers(const Cell& a, const Cell& b) {
    return abs(a.x - b.x) > 1 || abs(a.y - b.y) > 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        unordered_map<int, vector<Cell>> colorPositions;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                colorPositions[grid[i][j]].emplace_back(i, j);
            }
        }

        // For each color, count non-stranger cells
        vector<int> nonStrangerCounts;
        for (const auto& pair : colorPositions) {
            const auto& positions = pair.second;
            int count = 0;
            vector<bool> visited(positions.size(), false);
            for (size_t i = 0; i < positions.size(); ++i) {
                if (!visited[i]) {
                    bool hasStrangers = false;
                    for (size_t j = i + 1; j < positions.size(); ++j) {
                        if (areStrangers(positions[i], positions[j])) {
                            visited[j] = true;
                            hasStrangers = true;
                        }
                    }
                    if (!hasStrangers) {
                        count++;
                    }
                }
            }
            nonStrangerCounts.push_back(count);
        }

        // Sort counts
        sort(nonStrangerCounts.begin(), nonStrangerCounts.end());

        // Calculate the result
        int result = 0;
        for (size_t i = 0; i < nonStrangerCounts.size() - 1; ++i) {
            result += nonStrangerCounts[i];
        }

        // Add the count for the last color (most frequent color)
        if (nonStrangerCounts.back() == 0) {
            result++;
        } else {
            result += nonStrangerCounts.back();
        }

        cout << result << endl;
    }

    return 0;
}
