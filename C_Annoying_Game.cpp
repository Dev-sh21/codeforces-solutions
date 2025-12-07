#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long get_max_subarray(int n, const vector<long long>& a) {
    long long max_so_far = a[0];
    long long current_max = a[0];
    for (int i = 1; i < n; i++) {
        current_max = max(a[i], current_max + a[i]);
        max_so_far = max(max_so_far, current_max);
    }
    return max_so_far;
}

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<long long> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    if (k % 2 == 0) {
        cout << get_max_subarray(n, a) << "\n";
        return;
    }

    vector<long long> L(n);
    L[0] = a[0];
    for (int i = 1; i < n; i++) {
        L[i] = max(a[i], L[i - 1] + a[i]);
    }

    vector<long long> R(n);
    R[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        R[i] = max(a[i], R[i + 1] + a[i]);
    }

    long long ans = get_max_subarray(n, a);

    for (int i = 0; i < n; i++) {
        long long current_val = L[i] + R[i] - a[i] + b[i];
        ans = max(ans, current_val);
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}