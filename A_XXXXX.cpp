#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    long long sum = 0;
    int first_not_divisible = -1;
    int last_not_divisible = -1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] % x != 0) {
            if (first_not_divisible == -1) first_not_divisible = i;
            last_not_divisible = i;
        }
    }

    if (sum % x != 0) {
        cout << n << endl;
    } else if (first_not_divisible == -1) {
        cout << -1 << endl;
    } else {
        int prefix_to_remove = first_not_divisible + 1;
        int suffix_to_remove = n - last_not_divisible;
        cout << n - min(prefix_to_remove, suffix_to_remove) << endl;
    }
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