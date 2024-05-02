#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; 
        string s;
        cin >> s; 

        int openCount = 0; 
        int moves = 0; 

        for (char c : s)
        {
            if (c == '(')
            {
                openCount++;
            }
            else
            {
                
                if (openCount == 0)
                {
                    moves++;
                }
                else
                {
                    openCount--;
                }
            }
        }

        cout << moves << endl;
    }

    return 0;
}
