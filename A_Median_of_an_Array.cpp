#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int median_pos = (n + 1) / 2 - 1;
    long long operations = 0;

    for (int i = median_pos; i < n; i++) {
        if (a[i] == a[median_pos]) {
            operations++;
        } else {
            break;
        }
    }

    cout << operations << endl;
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