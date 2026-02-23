#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), c(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> c[i];

        vector<long long> dp(n);
        long long ans = 0, total = 0;

        for (int i = 0; i < n; ++i) {
            dp[i] = c[i];
            for (int j = 0; j < i; ++j) {
                if (a[j] <= a[i]) {
                    dp[i] = max(dp[i], dp[j] + c[i]);
                }
            }
            ans = max(ans, dp[i]);
            total += c[i];
        }

        cout << total - ans << "\n";
    }

    return 0;
}