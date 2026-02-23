#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> cnt(2 * n + 1, 0);
    for (int i = 0; i < 2 * n; ++i) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int m = 0;
    int e = 0;

    for (int x : cnt) {
        if (x == 0) continue;
        if (x % 2 != 0) {
            m++;
        } else {
            e++;
        }
    }

    int ans = m + 2 * e;

    if (m == 0) {
        if (e % 2 != n % 2) {
            ans -= 2;
        }
    }

    cout << ans << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}