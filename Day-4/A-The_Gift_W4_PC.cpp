#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X, N, M;
    cin >> X >> N >> M;

    int ttl = X + min(X, M);

    if (ttl >= N)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
