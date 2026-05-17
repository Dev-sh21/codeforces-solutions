#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    if (k == 0) {
        cout << s.size() << "\n";
        return;
    }
    
    int max_val = *s.rbegin();
    int mex_val = 0;
    
    for (int x : s) {
        if (x == mex_val) {
            mex_val++;
        } else {
            break;
        }
    }
    
    if (mex_val > max_val) {
        cout << s.size() + k << "\n";
    } else {
        int new_elem = (mex_val + max_val + 1) / 2;
        s.insert(new_elem);
        cout << s.size() << "\n";
    }
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