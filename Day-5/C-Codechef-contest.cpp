#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> dice(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> dice[i];
        }

        sort(dice.begin(), dice.end());

        // flip 
        for (int i = 0; i < K; ++i)
        {
            if (dice[i] < 4)
            {
                dice[i] = 7 - dice[i];
            }
            else
            {
                break; 
            }
        }

        // Calculate
        int max = 0;
        for (int val : dice)
        {
            max += val;
        }

        cout << max << endl;
    }
    return 0;
}
