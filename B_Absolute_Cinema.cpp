#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long sum_b = 0;
    long long max_a = 0;

    for (int i = 0; i < n; i++) {
        long long min_val = min(a[i], b[i]);
        long long max_val = max(a[i], b[i]);

        sum_b += max_val;
        max_a = max(max_a, min_val);
    }

    cout << sum_b + max_a << "\n";
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