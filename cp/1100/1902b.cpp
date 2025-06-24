#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    while(tc--){
        long long n, P, l, t;
        cin >> n >> P >> l >> t;
        
        // Total tasks available = ceil(n / 7)
        long long totalTasks = (n + 6) / 7; 
        
        // Maximum study days where tasks extra can be used:
        long long maxTwoDays = totalTasks / 2;   // days that can yield 2 tasks
        long long maxOneDay = totalTasks % 2;      // possibly one day that can yield 1 task
        
        // We'll binary search for the minimum study days s (0 <= s <= n)
        // such that: total points = s*l + extraPoints(s) >= P,
        // where extraPoints(s) = 2*t * min(s, maxTwoDays) + ( (s > maxTwoDays && maxOneDay) ? t : 0 )
        long long low = 0, high = n, ans = n;
        while(low <= high){
            long long mid = (low + high) / 2;
            
            // Calculate extra points from tasks:
            long long extra = 0;
            if(mid <= maxTwoDays){
                extra = mid * 2 * t;
            } else {
                extra = maxTwoDays * 2 * t;
                if(maxOneDay && mid > maxTwoDays) extra += t;
            }
            
            long long totalPoints = mid * l + extra;
            
            if(totalPoints >= P){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        // Maximum rest days = total days - study days needed
        cout << n - ans << "\n";
    }
    return 0;
}
