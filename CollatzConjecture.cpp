#include <iostream>
using namespace std;

int main() {
  

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int k, x;
        cin >> k >> x;
        long long ans = x;
        for (int i = 0; i < k; ++i) ans *= 2LL; 
        cout << ans << '\n';
    }
    return 0;
}