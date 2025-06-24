#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        long long maxe = max(b1, max(b2, b3));
        long long maxl = max(l1, max(l2, l3));
        if (l1 + l2 + l3 == maxe &&(b1==b2)&&(b2==b3))
        {
            cout << "YES" << endl;
            continue;
        }
         if (b1 + b2 + b3 == maxl&&(l1==l2&&l2==l3))
        {
            cout << "YES" << endl;
            continue;
        }
         if (2 * maxl == l1 + l2 + l3)
        {
            if (l1 == maxl)
            {
                if (b2 == b3)
                {
                    if (b1 + b2 == l1)
                    {
                        cout << "YES" << endl;
                        continue;
                    }
                    // else
                    // {
                        // cout << "NO" << endl;
                    // }
                }
                // else
                // {
                    // cout << "NO" << endl;
                // }
            }
            else if (l2 == maxl)
            {
                if (b1 == b3)
                {
                    if (b2 + b3 == l2)
                    {
                        cout << "YES" << endl;
                        continue;
                    }
                    // else
                    // {
                        // cout << "NO" << endl;
                    // }
                }
                // else
                // {
                    // cout << "NO" << endl;
                // }
            }
            else
            {
                if (b1 == b2)
                {
                    if (b3 + b2 == l3)
                    {
                        cout << "YES" << endl;
                        continue;
                    }
                    // else
                    // {
                        // cout << "NO" << endl;
                    // }
                }
                // else
                // {
                    // cout << "NO" << endl;
                // }
            }
        }
        if (2 * maxe == b1 + b2 + b3)
        {
            if (b1 == maxe)
            {
                if (l2 == l3)
                {
                    if (l1 + l2 == b1)
                    {
                        cout << "YES" << endl;
                        continue;
                    }
                    else
                    {
                        // cout << "NO" << endl;
                    }
                }
                else
                {
                    // cout << "NO" << endl;
                }
            }
            else if (b2 == maxe)
            {
                if (l1 == l3)
                {
                    if (l2 + l3 == b2)
                    {
                        cout << "YES" << endl;
                        continue;
                    }
                    else
                    {
                        // cout << "NO" << endl;
                    }
                }
                else
                {
                    // cout << "NO" << endl;
                }
            }
            else
            {
                if (l1 == l2)
                {
                    if (l1 + l3 == b3)
                    {
                        cout << "YES" << endl;
                        continue;
                    }
                    else
                    {
                        // cout << "NO" << endl;
                    }
                }
                else
                {
                    // cout << "NO" << endl;
                }
            }
        }
       
        
            cout << "NO" << endl;
        
    }
    return 0;
}