#include <iostream>
#include <map>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    map<int, int> counts;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        counts[x]++;
    }

    int deletions = 0;

    for (auto const& [val, freq] : counts) {
        if (freq < val) {
            deletions += freq;
        } else {
            deletions += (freq - val);
        }
    }

    cout << deletions << endl;
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