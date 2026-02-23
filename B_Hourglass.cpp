#include <iostream>
#include <algorithm>
using ll=long long;

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            ll s, k, m;
              cin >> s >> k >> m;

    if (s <= k) {
        ll time_in_cycle = m % k;
        cout << max(0LL, s - time_in_cycle) << "\n";
    } else {
        ll time_in_cycle = m % (2 * k);
        
        if (time_in_cycle < k) {
            cout << s - time_in_cycle << "\n";
        } else {

            cout << (2 * k) - time_in_cycle << "\n";
        }
    }
        }
    }

    
    return 0;
}