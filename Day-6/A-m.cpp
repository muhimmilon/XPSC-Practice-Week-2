#include<bits/stdc++.h>
using namespace std;

int minCoins(int N, int X, int Y, int difficulties[])
{
  int ttlCost = 0;

  for (int i = 0; i < N; i++)
  {
    int difficulty = difficulties[i];

    if (Y < difficulty * X)
    {
      ttlCost += Y;
    }
    else
    {
      ttlCost += difficulty * X;
    }
  }

  return ttlCost;
}

int main()
{
  int T;
  cin >> T;

  while (T--)
  {
    int N, X, Y;
    cin >> N >> X >> Y;

    int difficulties[N];
    for (int i = 0; i < N; i++)
    {
      cin >> difficulties[i];
    }

    int minCost = minCoins(N, X, Y, difficulties);
    cout << minCost << endl;
  }

  return 0;
}
