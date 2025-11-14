#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long X;
        cin >> n >> X;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end(), [&](long long p, long long q) {
            long long rp = p % X;
            long long rq = q % X;
            if (rp != rq) return rp < rq;
            return p > q;
        });

        long long S = 0;
        long long ans = 0;

        for (long long p : a) {
            long long before = S / X;
            S += p;
            long long after = S / X;
            if (after > before)
                ans += p;
        }

        cout << ans << '\n';
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }

    return 0;
}
