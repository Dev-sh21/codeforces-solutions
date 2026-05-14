#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    for (int x = 0; x <= n; x++) {
        int y = n - x;
        int characteristic = (x * (x - 1)) / 2 + (y * (y - 1)) / 2;

        if (characteristic == k) {
            cout << "YES" << endl;
            for (int i = 0; i < x; i++) {
                cout << 1 << " ";
            }
            for (int i = 0; i < y; i++) {
                cout << -1 << " ";
            }
            cout << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}