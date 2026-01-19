#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main() {
    int n,k;
    cin >> n>>k;

    vector<uint32_t> ip(n);

    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        char dot;
        cin >> a >> dot >> b >> dot >> c >> dot >> d;
        ip[i] = (uint32_t(a) << 24) | (uint32_t(b) << 16) | (uint32_t(c) << 8) | uint32_t(d);
    }
    for (int p = 0; p <= 32; p++) {
        uint32_t mask;
        if (p == 0) mask = 0;
        else mask = (~uint32_t(0)) << (32 - p);

        unordered_set<uint32_t> networks;
        for (int i = 0; i < n; i++) {
            networks.insert(ip[i] & mask);
        }

        if ((int)networks.size() == k) {
            uint32_t m = mask;
            cout << ((m >> 24) & 255) << "."
                 << ((m >> 16) & 255) << "."
                 << ((m >> 8) & 255) << "."
                 << (m & 255) << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
    return 0;
}