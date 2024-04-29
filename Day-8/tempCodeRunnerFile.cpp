#include <iostream>
#include <vector>

using namespace std;

int minInvitations(int n, vector<int>& p) {
  // Count the number of friends who can come alone (their best friend already has an invitation)
  int canComeAlone = 0;
  for (int i = 0; i < n; i++) {
    if (p[p[i] - 1] == i) {
      canComeAlone++;
    }
  }

  // If at least one friend can come alone, we only need to invite one more person
  if (canComeAlone > 0) {
    return 1;
  }

  // Otherwise, we need to invite two friends: one and their best friend
  return 2;
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
