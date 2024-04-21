#include <stdio.h>

int f(int l, int r, const int a[]) {
    int res = 0;
    for (int i = l; i <= r; ++i) {
        res ^= a[i];
    }
    return res;
}

int count(const int a[], int n) {
    int count = 0;
    for (int x = 1; x < n; ++x) {
        for (int y = x; y < n; ++y) {
            for (int z = y; z < n; ++z) {
                if ((f(x, y, a) ^ f(y, z, a)) > f(x, z, a)) {  // Replaced <= with >
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }

        int result = count(a, n);
        printf("%d\n", result);
    }

    return 0;
}
