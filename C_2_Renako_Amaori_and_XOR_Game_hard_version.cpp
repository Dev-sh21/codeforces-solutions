#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    vector<int> b(n);
    for (int i = 0; i < n; ++i) cin >> b[i];

    int total_xor = 0;
    for (int x : a) total_xor ^= x;
    for (int x : b) total_xor ^= x;

    if (total_xor == 0) {
        cout << "Tie\n";
        return;
    }

    int msb = 0;
    for (int k = 20; k >= 0; --k) {
        if ((total_xor >> k) & 1) {
            msb = k;
            break;
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        int bit_a = (a[i] >> msb) & 1;
        int bit_b = (b[i] >> msb) & 1;
        
        if (bit_a != bit_b) {
            if ((i + 1) % 2 != 0) {
                cout << "Ajisai\n";
            } else {
                cout << "Mai\n";
            }
            return;
        }
    }
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