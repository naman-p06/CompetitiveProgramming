#include <bits/stdc++.h>
using namespace std;

bool has(const string &s)
{
    unordered_set<string> substrings;
    for (size_t i = 0; i < s.length() - 1; i++)
    {
        string substring = s.substr(i, 2);
        if (substrings.find(substring) != substrings.end() && (i == 0 || s[i - 1] != s[i + 1]))
        {
            return true;
        }
        substrings.insert(substring);
    }
    return false;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        if (has(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}