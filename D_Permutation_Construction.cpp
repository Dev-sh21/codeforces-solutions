#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct PrefixSum {
    long long value;
    int id;
};

bool comparePrefix(const PrefixSum& a, const PrefixSum& b) {
    if (a.value != b.value) {
        return a.value > b.value;
    }
    return a.id < b.id;
}

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<PrefixSum> s(n);
    long long current_sum = 0;
    s[0] = {0, 0};
    for (int i = 1; i < n; ++i) {
        current_sum += a[i - 1];
        s[i] = {current_sum, i};
    }

    sort(s.begin(), s.end(), comparePrefix);

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        p[s[i].id] = i + 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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