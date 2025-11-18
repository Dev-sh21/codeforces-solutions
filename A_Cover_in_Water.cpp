#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int e = 0;       
    bool ok = true;   

    for (int i = 0; i < n; i++) {
        if (s[i] == '.') e++;

        if (i > 0 && i < n - 1) {
            if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') {
                cout << 2 << "\n";
                ok = false;
                break;
            }
        }
    }

    if (ok) {
        cout << e << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}