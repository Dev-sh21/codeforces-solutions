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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Case: already equal
        bool all_equal = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                all_equal = false;
                break;
            }
        }
        if (all_equal) {
            cout << 0 << "\n";
            continue;
        }

        // Try keeping the first element
        int first = a[0], last = a[n - 1];

        int pref = 0;
        while (pref < n && a[pref] == first) pref++;
        int s1 = n - 1;
        while (s1 >= 0 && a[s1] == first) s1--;
        int cost_first = (s1 - pref + 1 > 0) ? (s1 - pref + 1) : 0;

        // Try keeping the last element
        int p2 = 0;
        while (p2 < n && a[p2] == last) p2++;
        int suff2 = n - 1;
        while (suff2 >= 0 && a[suff2] == last) suff2--;
        int cost_last = (suff2 - p2 + 1 > 0) ? (suff2 - p2 + 1) : 0;

        cout << min(cost_first, cost_last) << "\n";
    }

    return 0;
}