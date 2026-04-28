#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cnt[1000005];

bool check(int k, int max_a, int n) {
    vector<int> M;
    vector<int> P;
    
    for (int i = 0; i < k; ++i) {
        if (cnt[i] == 0) {
            M.push_back(i);
        } else {
            for (int j = 0; j < cnt[i] - 1; ++j) {
                P.push_back(i);
            }
        }
    }
    
    for (int i = k; i <= max_a; ++i) {
        if (cnt[i] > 0) {
            for (int j = 0; j < cnt[i]; ++j) {
                P.push_back(i);
            }
        }
    }

    if (P.size() < M.size()) return false;
    
    sort(M.rbegin(), M.rend());
    sort(P.rbegin(), P.rend());

    for (int i = 0; i < (int)M.size(); ++i) {
        if (P[i] < 2 * M[i] + 1) return false;
    }
    
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int max_a = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt[a[i]]++;
        max_a = max(max_a, a[i]);
    }

    int low = 1, high = n + 1, mexwf = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid, max_a, n)) {
            mexwf = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << mexwf << "\n";

    for (int i = 0; i <= max_a; ++i) cnt[i] = 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}