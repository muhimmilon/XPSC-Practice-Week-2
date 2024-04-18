#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string moves[n];
        for (int i = 0; i < n; ++i) {
            int b;
            cin >> b;
            cin >> moves[i];
        }

        // Initialize the result array with the final sequence
        int result[n];
        for (int i = 0; i < n; ++i) {
            result[i] = a[i];
        }

        // Apply the moves in reverse order
        for (int i = n - 1; i >= 0; --i) {
            for (char move : moves[i]) {
                if (move == 'U') {
                    result[i] = (result[i] + 1) % 10;
                } else {
                    result[i] = (result[i] + 9) % 10;
                }
            }
        }

        // Print the initial sequence
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
