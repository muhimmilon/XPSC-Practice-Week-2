#include<bits/stdc++.h>
using namespace std;

int main()
{
    int K, S;
    cin >> K >> S;

    int result = 0;
    for (int X = 0; X <= K; ++X)
    {
        for (int Y = 0; Y <= K; ++Y)
        {
            int Z = S - X - Y;
            if (0 <= Z && Z <= K)
            {
                ++result;
            }
        }
    }
    cout <<result << endl;
    return 0;
}
