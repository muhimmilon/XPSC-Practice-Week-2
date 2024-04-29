#include<bits/stdc++.h>
using namespace std;

int minInvitations(int n, vector<int>& p)
{
  int unpaired = 0;
  for (int i = 0; i < n; i++)
  {
    if (p[p[i] - 1] != i) {
      unpaired++;
    }
  }

  int minInvites = 0;

  
  if (unpaired == 0) {

    minInvites = 2;
  } else if (unpaired == 1) {
    minInvites = 2;
  } else {
    minInvites = 2;
  }

  return minInvites;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }

    int minInvites = minInvitations(n, p);
    cout << minInvites << endl;
  }

  return 0;
}
