#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> om(N), addy(N);
        for (int i = 0; i < N; ++i) //om
        {
            cin >> om[i];
        }
        for (int i = 0; i < N; ++i)
        {
            cin >> addy[i]; //addy
        }

        int om_max = 0, addy_max = 0;
        int str_om = 0, str_addy = 0;

        for (int i = 0; i < N; ++i)
        {
            if (om[i] > 0)
            {
                str_om++;
                om_max = max(om_max, str_om);
            }
            else
            {
                str_om = 0;
            }

            if (addy[i] > 0)
            {
                str_addy++;
                addy_max = max(addy_max, str_addy);
            }
            else
            {
                str_addy = 0;
            }
        }

        if (om_max > addy_max)
        {
            cout << "Om" << endl;
        }
        else if (addy_max > om_max)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }

    return 0;
}
