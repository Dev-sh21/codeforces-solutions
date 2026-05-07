#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long a, b, n, m;
    cin >> a >> b >> n >> m;

    long long cost_per_bundle = min(m * a, (m + 1) * b);
    long long bundles = n / (m + 1);
    long long remainder = n % (m + 1);

    long long total_cost = (bundles * cost_per_bundle) + (remainder * min(a, b));

    cout << total_cost << endl;
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