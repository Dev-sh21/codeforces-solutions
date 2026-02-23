#include <iostream>
using namespace std;
using ll=long long;

int simulate(ll a, ll b, bool whiteTop) {
    ll size = 1;
    int layers = 0;
    bool white = whiteTop;

    while (true) {
        if (white) {
            if (a < size) break;
            a -= size;
        } else {
            if (b < size) break;
            b -= size;
        }
        layers++;
        size *= 2;
        white = !white;
    }
    return layers;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        int ans1 = simulate(a, b, true); 
        int ans2 = simulate(a, b, false);  

        cout << max(ans1, ans2) << "\n";
    }
    return 0;
}