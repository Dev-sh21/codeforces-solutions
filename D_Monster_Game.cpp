#include <iostream>
#include<vector>

using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)cin >> a[i];
        for (int i = 0; i < n; i++)cin >> b[i];
        sort(a.begin(), a.end());

        vector<ll> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + b[i];
        }


        ll ans = 0;

        for (int i = 0; i < n; i++) {
            ll x = a[i];     
            ll swords = n-i;

            ll levels = upper_bound(pref.begin(), pref.end(), swords) - pref.begin() - 1;

            ans = max(ans, x * levels);
        }

        cout << ans << "\n";
    }
    return 0;
}