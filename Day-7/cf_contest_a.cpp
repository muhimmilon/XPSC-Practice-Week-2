#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            freq[num]++;
        }
        
        int min_cards = n;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            int cards_of_num = it->second;
            int remaining = cards_of_num % k;
            min_cards -= remaining;
        }
        
        cout << min_cards << endl;
    }
    
    return 0;
}
