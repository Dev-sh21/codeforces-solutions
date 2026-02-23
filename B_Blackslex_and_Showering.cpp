#include <iostream>
#include<vector>
using namespace std;
using ll=long long;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        ll total = 0;
        for (int i = 0; i + 1 < n; i++)
            total += llabs(a[i] - a[i + 1]);

        ll best_gain = 0;

        for (int i = 1; i + 1 < n; i++) {
            ll old_cost =
                llabs(a[i] - a[i - 1]) + llabs(a[i] - a[i + 1]);
            ll new_cost =
                llabs(a[i - 1] - a[i + 1]);
            best_gain = max(best_gain, old_cost - new_cost);
        }

        best_gain = max(best_gain, llabs(a[0] - a[1]));
        best_gain = max(best_gain, llabs(a[n - 1] - a[n - 2]));

        cout << total - best_gain << "\n";
    }


    return 0;
}