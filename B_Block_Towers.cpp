#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin() + 1, arr.end());

    long long current_a1 = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > current_a1) {
            current_a1 += (arr[i] - current_a1 + 1) / 2;
        }
    }

    cout << current_a1 << "\n";
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