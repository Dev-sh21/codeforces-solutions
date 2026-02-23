#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string r;
        cin >> r;

        for (char c : r) {
            assert(c == 's' || c == 'u');
        }

        int n = r.size();
        int ans = 0;

        if (r[0] == 'u') {
            r[0] = 's';
            ans++;
        }

        if (r[n - 1] == 'u') {
            r[n - 1] = 's';
            ans++;
        }

        for (int i = 0; i + 1 < n; i++) {
            if (r[i] == 'u' && r[i + 1] == 'u') {
                r[i + 1] = 's';
                ans++;
            }
        }

        cout << ans << '\n';
    }

    
    return 0;
}