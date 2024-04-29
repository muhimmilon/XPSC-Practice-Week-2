#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int R1, R2, R3, R4, R5;
        cin >> R1 >> R2 >> R3 >> R4 >> R5;

        int count = R1 + R2 + R3 + R4 + R5;

        if (count >= 4)
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
