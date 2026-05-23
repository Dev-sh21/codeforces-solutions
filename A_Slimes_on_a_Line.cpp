#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int min_val = 1e9, max_val = -1e9;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
    }

    int ans = (max_val - min_val + 1) / 2;
    cout << ans << "\n";
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