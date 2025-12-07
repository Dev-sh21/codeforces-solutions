#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long sum_b = 0;
    long long non_zeros = 0;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sum_b += x;
        if (x > 0) {
            non_zeros++;
        }
    }

    
    long long ans = min(non_zeros, sum_b - n + 1);
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