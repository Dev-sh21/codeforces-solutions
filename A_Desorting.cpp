#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool alreadyNotSorted = false;
        for (int i = 0; i + 1 < n; ++i) {
            if (a[i] > a[i + 1]) {
                alreadyNotSorted = true;
                break;
            }
        }

        if (alreadyNotSorted) {
            cout << 0 << "\n";
            continue;
        }

        ll ans = (1LL << 60);
        for (int i = 0; i + 1 < n; ++i) {
            ll diff = a[i + 1] - a[i];   // diff >= 0 because array is sorted
            ll ops = diff / 2 + 1;       // minimum ops to make this diff negative
            if (ops < ans) ans = ops;
        }

        cout << ans << "\n";
    }

    return 0;
}