#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int maxDistinctLength(vector<int>& arr) {
    unordered_set<int> seen;
    int distinctCount = 0;
    for (int num : arr) {
        if (!seen.count(num)) {
            seen.insert(num);
            distinctCount++;
        }
    }
    return distinctCount;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << maxDistinctLength(arr) << endl;
    }

    return 0;
}
