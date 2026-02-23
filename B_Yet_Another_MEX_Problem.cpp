#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;

    vector<int> a(n);
    vector<int> freq(n + 2, 0); 

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < n + 2) {
            freq[a[i]]++;
        }
    }
    int global_mex = 0;
    while (freq[global_mex] > 0) {
        global_mex++;
    }
    cout << min(global_mex, k - 1) << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}