#include<bits/stdc++.h>
using namespace std;

int calculate(const string& word1, const string& word2) {
    int difference = 0;
    for (size_t i = 0; i < word1.length(); ++i) {
        difference += abs(word1[i] - word2[i]);
    }
    return difference;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> words(n);
        for (int i = 0; i < n; ++i) {
            cin >> words[i];
        }

        int minDiff = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int curr = calculate(words[i], words[j]);
                minDiff = min(minDiff, curr);
            }
        }

        cout << minDiff << endl;
    }
    return 0;
}
