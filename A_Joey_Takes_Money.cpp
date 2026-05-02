#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long product = 1;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        product *= a;
    }
    
    long long ans = (product + (n - 1)) * 2022;
    
    cout << ans << "\n";
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