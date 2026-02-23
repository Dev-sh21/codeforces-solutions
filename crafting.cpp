#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        long long total_a = 0, total_b = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_a += a[i];
        }
        
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            total_b += b[i];
        }
        
        if (total_a < total_b) {
            cout << "NO\n";
            continue;
        }

        long long total_excess = 0, total_deficit = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) {
                total_excess += a[i] - b[i];
            } else if (a[i] < b[i]) {
                total_deficit += b[i] - a[i];
            }
        }

        if (total_excess >= total_deficit) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
