#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<vector<char>>& grid, int n, int m) {
    bool hasWhite = false, hasBlack = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 'W') hasWhite = true;
            else hasBlack = true;
            // If both colors are present in adjacent cells, it's not possible
            if (i > 0 && grid[i][j] != grid[i-1][j])
                return false;
            if (j > 0 && grid[i][j] != grid[i][j-1])
                return false;
        }
    }
    // If either black or white is missing, or both are present, it's possible
    return !(hasWhite && hasBlack);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<char>> grid(n, vector<char>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }

        if (isPossible(grid, n, m)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
