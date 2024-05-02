#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i] && (s[i] == 'R' || t[i] == 'R'))
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }

    return 0;
}
