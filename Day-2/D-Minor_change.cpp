#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int n = S.length();
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (S[i] != T[i]) {
            ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}
