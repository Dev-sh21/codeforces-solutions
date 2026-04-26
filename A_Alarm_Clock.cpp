#include <iostream>

using namespace std;

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b >= a) {
        cout << b << endl;
        return;
    }

    if (c <= d) {
        cout << -1 << endl;
        return;
    }

    long long sleep_needed = a - b;
    long long sleep_per_cycle = c - d;

    long long cycles = (sleep_needed + sleep_per_cycle - 1) / sleep_per_cycle;

    long long total_time = b + (cycles * c);
    cout << total_time << endl;
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