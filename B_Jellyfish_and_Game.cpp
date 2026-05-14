#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    auto j_min = min_element(a.begin(), a.end());
    auto g_max = max_element(b.begin(), b.end());
    if (*j_min < *g_max) swap(*j_min, *g_max);

    if (k >= 2) {
        auto g_min = min_element(b.begin(), b.end());
        auto j_max = max_element(a.begin(), a.end());
        if (*g_min < *j_max) swap(*g_min, *j_max);
    }

    if (k >= 3 && k % 2 != 0) {
        auto j_min2 = min_element(a.begin(), a.end());
        auto g_max2 = max_element(b.begin(), b.end());
        if (*j_min2 < *g_max2) swap(*j_min2, *g_max2);
    }

    long long sum = 0;
    for (long long x : a) sum += x;
    cout << sum << endl;
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