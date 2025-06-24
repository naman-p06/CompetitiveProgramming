#include <bits/stdc++.h>
using namespace std;
 
struct State {
    unsigned long long L, R;
};

// HashMap-based Pruning: Only store the best R for each L
unordered_map<unsigned long long, unsigned long long> mergeStates(vector<State>& states) {
    unordered_map<unsigned long long, unsigned long long> best;
    for (auto &st : states) {
        if (best.find(st.L) == best.end() || best[st.L] < st.R) {
            best[st.L] = st.R;
        }
    }
    return best;
}

// Gate processing functions
unsigned long long applyGate(unsigned long long X, char op, unsigned long long a) {
    return (op == '+') ? (X + a) : (X * a);
}

unsigned long long bonusGate(unsigned long long X, char op, unsigned long long a) {
    return (op == '+') ? a : ((a - 1) * X);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<char> opL(n), opR(n);
        vector<unsigned long long> aL(n), aR(n);
        for (int i = 0; i < n; i++) {
            cin >> opL[i] >> aL[i] >> opR[i] >> aR[i];
        }

        unordered_map<unsigned long long, unsigned long long> dp;
        dp[1] = 1; // Initial state with 1 person in each lane

        for (int i = 0; i < n; i++) {
            vector<State> newStates;

            // Process all existing states in dp
            for (auto &[L, R] : dp) {
                for (int dL = 0; dL < 2; dL++) {
                    for (int dR = 0; dR < 2; dR++) {
                        unsigned long long newL = (dL == 0) ? applyGate(L, opL[i], aL[i]) : L;
                        unsigned long long newR = (dR == 0) ? applyGate(R, opR[i], aR[i]) : R;
                        
                        if (dL == 1) newR += bonusGate(L, opL[i], aL[i]);
                        if (dR == 1) newL += bonusGate(R, opR[i], aR[i]);

                        newStates.push_back({newL, newR});
                    }
                }
            }
            
            // Compress states: keep the best R for each unique L
            dp = mergeStates(newStates);
        }

        // Find max total people from the best states
        unsigned long long ans = 0;
        for (auto &[L, R] : dp) {
            ans = max(ans, L + R);
        }
        cout << ans << "\n";
    }
    return 0;
}
