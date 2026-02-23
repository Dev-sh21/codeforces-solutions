#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        // Make it non-decreasing (simulate unlimited operation 1)
        for (int i = 1; i < n; i++)
            a[i] = max(a[i], a[i - 1]);

        auto compute = [&](bool peakOnEven) {
            ll cost = 0;
            vector<ll> b = a;
            for (int i = n - 2; i >= 0; i--) {
                bool shouldBePeak = ((i % 2 == 0) == peakOnEven);
                if (shouldBePeak) {
                    if (b[i] <= b[i + 1]) {
                        ll diff = b[i + 1] - b[i] + 1;
                        cost += diff;
                        b[i + 1] -= diff;
                    }
                } else {
                    if (b[i] >= b[i + 1]) {
                        ll diff = b[i] - b[i + 1] + 1;
                        cost += diff;
                        b[i] -= diff;
                    }
                }
            }
            return cost;
        };

        ll ans = min(compute(true), compute(false));
        cout << ans << "\n";
    }
    return 0;
}