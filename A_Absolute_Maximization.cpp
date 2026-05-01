#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int max_val = 0;
    int min_val = 0;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        if (i == 0) {
            max_val = x;
            min_val = x;
        } else {
            max_val |= x;
            min_val &= x;
        }
    }
    
    cout << max_val - min_val << "\n";
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