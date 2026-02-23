#include <iostream>
#include<vector>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >>t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        vector<ll> suf(n);


        suf[n - 1] = max(a[n-1], b[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
             suf[i] = max(a[i], max(b[i], suf[i +1]));
        }
        vector<ll> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + suf[i];
        }

  
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            cout << pref[r + 1] - pref[l] << " ";
        }
        cout << "\n";
    }
    return 0;
}