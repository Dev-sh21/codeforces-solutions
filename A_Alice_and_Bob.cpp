#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long a;
        cin >> n >> a;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        vector<pair<long long,int>> events;
        events.reserve(2*n);

        for (long long x : v) {
            long long d = llabs(a - x);

            if (d == 0) continue;

            long long L = x - (d - 1);
            long long R = x + (d - 1);

            events.push_back({L, +1});
            events.push_back({R + 1, -1});
        }

        if (events.empty()) {
            cout << 0 << "\n";
            continue;
        }

        sort(events.begin(), events.end());

        long long bestPos = 0;
        long long bestCnt = 0;
        long long curr = 0;

        for (auto &e : events) {
            curr += e.second;
            if (curr > bestCnt) {
                bestCnt = curr;
                bestPos = e.first;
            }
        }

        cout << bestPos << "\n";
    }

    return 0;
}
