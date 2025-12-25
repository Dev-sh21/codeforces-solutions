#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        if (!(cin >> n)) break;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long k = a[0];
        long long diff = a[1] - a[0];
        if (diff > k) {
            k = diff;
        }

        cout << k << "\n";
    }
    

    return 0;
}