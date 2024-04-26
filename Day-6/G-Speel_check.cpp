#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string name;
        cin >> n >> name;
        string s = "Timur";

        sort(name.begin(), name.end());
        sort(s.begin(), s.end());

        if (name == s)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
