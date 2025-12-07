#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long x, y;
    if (!(cin >> n >> x >> y)) return;
    
    string s;
    cin >> s;

    long long cnt8 = 0;
    for (char c : s) {
        if (c == '8') {
            cnt8++;
        }
    }

    x = abs(x);
    y = abs(y);

    bool cond1 = (x <= n) && (y <= n);
    bool cond2 = (x + y <= n + cnt8);

    if (cond1 && cond2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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