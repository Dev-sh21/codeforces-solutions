#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long R0,X,D;
        int n;
        cin >> R0 >> X>> D >> n;
        string s;
        cin >> s;

        long long L = R0, R = R0;
        int ans = 0;

        for (char c : s) {
            if (c == '1') {
                ans++;
                L = max(0LL, L - D);
                R = R + D;
            } else {
                if (L >= X) {
                    continue;
                }
                ans++;
                L = max(0LL, L - D);
                R = min(X - 1, R + D);
            }
        }
        cout << ans << "\n";
    }
}
