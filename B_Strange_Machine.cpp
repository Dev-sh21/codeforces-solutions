#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--){
        int n,q;
        cin >> n>> q;
        string s;
        cin >> s;

        vector<ll> a(q);
        for (int i = 0;i < q; ++i) cin >>a[i];
        int cntA = 0,cntB = 0;
        for (char c : s) {
            if (c == 'A') ++cntA;
            else ++cntB;
        }
        for (int i = 0; i < q; ++i) {
            ll x = a[i];
            if (x <= 0) {
                cout << 0 << '\n';
                continue;
            }
            if (cntA == n) {
                cout << x << '\n';
                continue;
            }
            if (cntB == n) {
                ll steps = 0;
                while (x > 0) {
                    x >>= 1;
                    ++steps;
                }
                cout << steps << '\n';
                continue;
            }
            ll seconds = 0;
            int cur = 0;
            while (x > 0) {
                if (s[cur] == 'A') {
                    --x;
                } else {
                    x >>= 1;
                }
                ++seconds;
                cur = (cur + 1);
                if (cur == n) cur = 0;
            }
            cout << seconds << '\n';
        }
    }
    return 0;
}