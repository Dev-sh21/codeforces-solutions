#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    long long ans = 0;
    for (int i = 0; i < n - 1; i++) {
        int a = p[i];
        int b = p[i+1];
        int diff = (a > b) ? (a - b) : (b - a);
        
        if (a % diff == 0) {
            ans++;
        }
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