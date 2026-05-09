#include <iostream>
#include <algorithm>

using namespace std;

int get_luckiness(int n) {
    int max_d = 0, min_d = 9;
    if (n == 0) return 0;
    while (n > 0) {
        int d = n % 10;
        max_d = max(max_d, d);
        min_d = min(min_d, d);
        n /= 10;
    }
    return max_d - min_d;
}

void solve() {
    int l, r;
    cin >> l >> r;

    int ans = l;
    int max_luck = -1;

    for (int i = l; i <= min(r, l + 100); i++) {
        int current_luck = get_luckiness(i);
        if (current_luck > max_luck) {
            max_luck = current_luck;
            ans = i;
        }
        if (max_luck == 9) break;
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}