#include <bits/stdc++.h>
using namespace std;

// Precompute prefix XOR for faster calculations
vector<int> precompute_prefix_xor(const vector<int>& a) {
  int n = a.size();
  vector<int> prefix_xor(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    prefix_xor[i] = prefix_xor[i - 1] ^ a[i - 1];
  }
  return prefix_xor;
}

int count_valid_triplets(const vector<int>& a) {
  int n = a.size();
  int count = 0;
  vector<int> prefix_xor = precompute_prefix_xor(a);

  // Iterate through all possible triplets (x, y, z)
  for (int x = 1; x <= n; ++x) {
    for (int y = x; y <= n; ++y) {
      for (int z = y; z <= n; ++z) {
        // Check if the condition is satisfied using prefix XOR
        if ((prefix_xor[y] ^ prefix_xor[x - 1]) > (prefix_xor[z] ^ prefix_xor[x - 1])) {
          count++;
        }
      }
    }
  }
  return count;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    int result = count_valid_triplets(a);
    cout << result << endl;
  }

  return 0;
}
