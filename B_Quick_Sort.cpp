#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int target = 1; 
    
    for (int i = 0; i < n; i++) {
        if (p[i] == target) {
            target++;
        }
    }

    int m = target - 1; 
    int remaining = n - m; 
    int ans = (remaining + k - 1) / k;
    
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