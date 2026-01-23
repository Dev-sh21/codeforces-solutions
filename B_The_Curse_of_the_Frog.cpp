#include <iostream>
#include <algorithm>
using namespace std;
using ll=long long;

int main() {

    int t;
    cin >>t;
    while (t--) {
        ll n,x;
        cin >> n >> x;

        ll s_free = 0;
        ll p_max =0;
        bool first =true;

        for (int i = 0; i < n; i++) {
            ll a, b, c;
            cin >> a >> b >> c;

            s_free += (b - 1) *a;

            ll p = b * a - c;
            if (first) {
                p_max = p;
                first = false;
            } else {
                p_max = max(p_max, p);
            }
        }

        if (s_free >= x) {
            cout << 0 << "\n";
            continue;
        }

        if (p_max <= 0) {
            cout << -1 << "\n";
            continue;
        }

        ll needed = x - s_free;
        ll rollbacks = (needed + p_max - 1) / p_max;

        cout << rollbacks << "\n";
    }

    return 0;
}