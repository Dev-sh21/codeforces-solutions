#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        bool possible = false;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (a == 100) {
                possible = true;
            }
        }
        if (possible) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    return 0;
}