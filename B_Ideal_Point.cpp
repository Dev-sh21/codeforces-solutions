#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    bool L = false, R = false;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        if (l == k) L = true;
        if (r == k) R = true;
    }
    cout << (L && R ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}