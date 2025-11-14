#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);

        bool hasEven = false, hasOdd = false;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];

            if (a[i] % 2 == 0) hasEven = true;
            else hasOdd = true;

        }

        if (hasEven && hasOdd) {

            sort(a.begin(), a.end());
        }

        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}