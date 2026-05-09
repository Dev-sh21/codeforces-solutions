#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
    vector<vector<int>> cols(m, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> cols[j][i];
        }
    }
    long long total_sum = 0;
    for (int j = 0; j < m; ++j) {
        sort(cols[j].begin(), cols[j].end());
        long long current_col_contribution = 0;
        for (int i = 0; i < n; ++i) {
            long long val = cols[j][i];
            current_col_contribution += (1LL * i * val) - (1LL * (n - 1 - i) * val);
        }
        total_sum += current_col_contribution;
    }
    cout << total_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}