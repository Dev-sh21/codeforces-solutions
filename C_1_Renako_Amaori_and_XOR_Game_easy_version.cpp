#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int diff_count = 0;
    int last_diff_idx = -1;

    for (int i = 0; i < n; ++i) {
        int b_val;
        cin >> b_val;
        if (a[i] != b_val) {
            diff_count++;
            last_diff_idx = i + 1;
        }
    }

    if (diff_count % 2 == 0) {
        cout << "Tie\n";
    } else {
        if (last_diff_idx % 2 != 0) {
            cout << "Ajisai\n";
        } else {
            cout << "Mai\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}