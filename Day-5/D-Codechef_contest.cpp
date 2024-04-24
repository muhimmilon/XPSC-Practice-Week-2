#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        long long S = 0;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] <= 1 || S <= 1)
            {
                S += A[i];
            }
            else
            {
                S *= A[i];
            }
            S %= MOD;
        }

        cout << S << endl;
    }
    return 0;
}
