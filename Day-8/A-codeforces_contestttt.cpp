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

  // Minimum invitations needed
  int minInvites = 0;

  // Handle cases with 0 or 1 unpaired friend
  if (unpaired == 0) {
    // If no unpaired friends, need invitations for 2 friends to ensure at least 2 come
    minInvites = 2+1;
  } else if (unpaired == 1) {
    // If 1 unpaired friend, invite them and their best friend
    minInvites = 2;
  } else {
    // If multiple unpaired friends, invite any 2 to ensure at least 2 come
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
