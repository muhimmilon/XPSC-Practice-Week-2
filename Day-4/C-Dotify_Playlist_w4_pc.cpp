#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K, L;
        cin >> N >> K >> L; // songs songkhya

        map<int, vector<int>> songs;

        for (int i = 0; i < N; ++i)
        {
            int M, Li;
            cin >> M >> Li;
            songs[Li].push_back(M);
        }

        for (auto& tl : songs)
        {
            sort(tl.second.rbegin(), tl.second.rend());
        }

        int list = 0;
        if (songs.find(L) != songs.end())
        {
            for (int i = 0; i < K; ++i)
            {
                if (i < songs[L].size())
                {
                    list = list + songs[L][i];
                }
                else
                {
                    list = -1;
                    break;
                }
            }
        }
        else
        {
            list = -1;
        }

        cout << list << endl;
    }

    return 0;
}
