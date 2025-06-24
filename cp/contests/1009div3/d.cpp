#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <algorithm>
using namespace std;

typedef long long ll;

struct Intv {
    ll L, R;
};

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> X(n), R(n);
        for (int i = 0; i < n; i++)
            cin >> X[i];
        for (int i = 0; i < n; i++)
            cin >> R[i];
        
        unordered_map<int, vector<Intv>> lines;
        for (int i = 0; i < n; i++){
            int cx = X[i], rad = R[i];
            for (int y = -rad; y <= rad; y++){
                ll tmp = (ll)rad*rad - (ll)y*y;
                int d = (int)floor(sqrt((long double) tmp));
                Intv cur = {(ll)cx - d, (ll)cx + d};
                lines[y].push_back(cur);
            }
        }
        
        ll ans = 0;
        for (auto &p : lines) {
            auto &vec = p.second;
            sort(vec.begin(), vec.end(), [](const Intv &a, const Intv &b){
                return a.L < b.L || (a.L == b.L && a.R < b.R);
            });
            ll L = vec[0].L, Rg = vec[0].R, cnt = 0;
            for (size_t i = 1; i < vec.size(); i++){
                if (vec[i].L <= Rg + 1)
                    Rg = max(Rg, vec[i].R);
                else {
                    cnt += (Rg - L + 1);
                    L = vec[i].L;
                    Rg = vec[i].R;
                }
            }
            cnt += (Rg - L + 1);
            ans += cnt;
        }
        
        cout << ans << "\n";
    }
    return 0;
}
