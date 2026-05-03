#include <iostream>
#include <vector>

using namespace std;

int freq[200005];

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
            freq[a[i][j]]++;
        }
    }
    bool possible = false;
    for (int i = 0; i < n; i++) {
        bool redundant = true;
        for (int bit : a[i]) {
            if (freq[bit] == 1) {
                redundant = false;
                break;
            }
        }
        if (redundant) {
            possible = true;
            break;
        }
    }
    if (possible) cout << "Yes\n";
    else cout << "No\n";
    for (int i = 0; i < n; i++) {
        for (int bit : a[i]) {
            freq[bit] = 0;
        }
    }
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