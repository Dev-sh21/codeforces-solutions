#include <iostream>
#include <vector>
#include <algorithm>
using ll=long long;

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        if (n == k) {
            cout << 0 << "\n";
            continue;
        }

        if (n < k) {
            cout << -1 << "\n";
            continue;
        }

        vector<ll> current_piles;
        current_piles.push_back(n);

        int minutes = 0;
        bool found = false;

        while (!current_piles.empty()) {
            minutes++;
            vector<ll> next_piles;

            for (ll x : current_piles) {
                ll half1 = x / 2;
                ll half2 = (x + 1) / 2;

                if (half1 == k || half2 == k) {
                    cout << minutes << "\n";
                    found = true;
                    break;
                }

                if (half1 > k) next_piles.push_back(half1);
                if (half2 > k) next_piles.push_back(half2);
            }

            if (found) break;

            sort(next_piles.begin(), next_piles.end());
            next_piles.erase(unique(next_piles.begin(), next_piles.end()), next_piles.end());

            current_piles = next_piles;
        }

        if (!found) {
            cout << -1 << "\n";
        }
    }

    return 0;
}