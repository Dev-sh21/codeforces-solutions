#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    vector<pair<int, int>> monsters(n);
    for (int i = 0; i < n; i++) {
        monsters[i] = {p[i], h[i]};
    }

    sort(monsters.begin(), monsters.end());

    long long total_damage = k;
    int idx = 0;

    while (idx < n) {
        if (monsters[idx].second <= total_damage) {
            idx++;
        } else {
            k -= monsters[idx].first;
            
            if (k <= 0) {
                cout << "NO\n";
                return;
            }
            total_damage += k;
        }
    }

    cout << "YES\n";
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