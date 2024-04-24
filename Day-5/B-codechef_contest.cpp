#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int min_cost = 0;

        for (int i = 0; i < N; ++i)
        {
            if (A[i] == 1)
            {
                min_cost += min(X, Y);
            }
            else
            {
                min_cost += min(A[i] * X, Y);
            }
        }

        cout << min_cost << endl;
    }

    return 0;
}
