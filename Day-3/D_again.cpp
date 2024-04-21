#include<bits/stdc++.h>
using namespace std;

int f(int l, int r, const vector<int>& a)
{
  int res = 0;
  for (int i = l; i <= r; ++i)
  {
    res ^= a[i];
  }
  return res;
}

int count(const vector<int>& a)
{
  int n = a.size();
  int count = 0;
  for (int x = 1; x < n; ++x)
  {
    for (int y = x; y < n; ++y)
    {
      for (int z = y; z < n; ++z)
      {
        if (f(y, z, a) ^ f(x, y, a) <= f(x, z, a))
        {
          count++;
        }
      }
    }
  }
  return count;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
    }

    int result = count(a);
    cout << result << endl;
  }

  return 0;
}