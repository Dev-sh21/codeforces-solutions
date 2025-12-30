#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool has2026 = false;
        bool has2025 = false;

        for (int i = 0; i + 3 < n; i++) {
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '6')
                has2026 = true;
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5')
                has2025 = true;
        }

        if (has2026 || !has2025) {
            cout << 0 << "\n";
            continue;
        }

        int ans = 100;
        for (int i = 0; i + 3 < n; i++) {
            int cost = 0;
            if (s[i] != '2') cost++;
            if (s[i+1] != '0') cost++;
            if (s[i+2] != '2') cost++;
            if (s[i+3] != '6') cost++;
            ans = min(ans, cost);
        }

        int cost = 0;
        for (int i = 0; i + 3 < n; i++) {
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5') {
                cost++;
                i += 3;
            }
        }

        ans = min(ans, cost);

        cout << ans << "\n";
    }

    return 0;
}