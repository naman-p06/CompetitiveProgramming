#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        
        vector<vector<long long>> matrix(n, vector<long long>(n));
        for (long long i = 0; i < n; ++i) {
            for (long long j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }

        vector<bool> served(n, false);
        vector<long long> answer;
        answer.push_back(0); 

        for (long long col = n - 1; col > 0; --col) {
            long long min_val = LLONG_MAX;
            long long min_row = -1;

            for (long long row = 0; row < n; ++row) {
                if (!served[row]) {
                    if (matrix[row][col] < min_val ||
                        (matrix[row][col] == min_val && matrix[row][col - 1] > matrix[min_row][col - 1])) {
                        min_val = matrix[row][col];
                        min_row = row;
                    }
                }
            }

            answer.push_back(min_val);
            served[min_row] = true;

            for (long long row = 0; row < n; ++row) {
                if (!served[row]) {
                    matrix[row][col - 1] += matrix[row][col];
                }
            }

            if (answer.size() == n) {
                break;
            }
        }

        if (answer.size() < n) {
            long long min_remaining = LLONG_MAX;
            for (long long row = 0; row < n; ++row) {
                if (!served[row]) {
                    min_remaining = min(min_remaining, matrix[row][0]);
                }
            }
            answer.push_back(min_remaining);
        }

        sort(answer.begin(), answer.end());

        long long mex = 1;
        for (long long i = 1; i < answer.size(); ++i) { 
            if (answer[i] == mex) {
                mex++;
            } else if (answer[i] > mex) {
                break;
            }
        }

        cout << mex << endl;
    }

    return 0;
}
