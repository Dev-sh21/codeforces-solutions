#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
using ll=long long;
bool can_fortify(ll total_extra, ll n, ll m, ll k) {
    ll left_limit = k - 1;
    ll right_limit = n - k;
    ll min_x = max(0LL, total_extra - right_limit);
    ll max_x = min(total_extra, left_limit);
    if (min_x > max_x) return false;

    ll target_x = total_extra / 2;

    ll best_x = max(min_x, min(target_x, max_x));
    ll best_y = total_extra - best_x;
    ll cost = best_x + best_y + max(best_x, best_y);

    return cost <= m + 1;
}

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    ll low = 0, high = n - 1;
    ll ans = 0;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (can_fortify(mid, n, m, k)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans + 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}