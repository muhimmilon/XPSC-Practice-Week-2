#include <iostream>

using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x;
    cin >> x;

    // Find the largest possible y less than x that is relatively prime to x
    // (meaning gcd(x, y) = 1). This will maximize gcd(x, y) + y.

    int y = x - 1;
    while (gcd(x, y) != 1) {
      y--;
    }

    cout << y << endl;
  }

  return 0;
}
