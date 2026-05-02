#include <iostream>

using namespace std;

void solve() {
    long long k;
    if (!(cin >> k)) return;
    long long x = k - 1;

    cout << x << endl;
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