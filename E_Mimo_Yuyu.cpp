#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

using ll = long long;
using vi = vector<int>;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << "\n"
#else
#define debug(x)
#endif

void solve() {
    int testCases; 
    cin >> testCases;
    while (testCases--) {
        ll rows, cols; 
        int entries;
        cin >> rows >> cols >> entries;

        unordered_map<int, int> parityMap;
        parityMap.reserve(entries * 2);

        for (int i = 0; i < entries; ++i) {
            int row, col;
            cin >> row >> col;
            parityMap[col] ^= 1;  
        }

        bool isMimo = false;
        if (rows == 1) {
            isMimo = parityMap[2] & 1;
        } else {
            for (const auto& [column, parity] : parityMap) {
                if (column >= 2 && (parity & 1)) {
                    isMimo = true;
                    break;
                }
            }
        }

        cout << (isMimo ? "Mimo\n" : "Yuyu\n");
    }
}

int main() {
    fastio;
    solve();
    return 0;
}
