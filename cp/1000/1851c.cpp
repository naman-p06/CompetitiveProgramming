#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (n == 1)
        {
            if (k == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        if (v[0] == v[n - 1])
        {
            int ncv = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                    ncv++;
            }
            if (ncv >= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        int first = 0;
        int last = n - 1;
        int lcount = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == v[n - 1])
            {
                lcount++;
            }
            if (lcount == k)
            {
                last = i;
                break;
            }
        }
        int fcount = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[0])
            {
                fcount++;
            }
            if (fcount == k)
            {
                first = i;
                break;
            }
        }
        if (fcount < k || lcount < k||first>=last)
        {
            cout << "NO" << endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}