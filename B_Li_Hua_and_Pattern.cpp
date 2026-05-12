#include<iostream>
#include<vector>

using namespace std;
using ll = long long;

void solve() {
    int n;
    ll k;
    if (!(cin >> n >> k)) return;
    
    vector<vector<int>> table(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> table[i][j];
        }
    }

    ll diff = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int ni = n - 1 - i;
            int nj = n - 1 - j;
            if (table[i][j] != table[ni][nj]) {
                diff++;
            }
        }
    }

    diff /= 2;

    if (k < diff) {
        cout << "NO\n";
    } else {
        ll remaining = k - diff;
        if (n % 2 != 0 || remaining % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}