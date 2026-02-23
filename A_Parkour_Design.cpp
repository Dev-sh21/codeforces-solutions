#include <iostream>
using namespace std;
using ll=long long;
int main() { 
    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x>>y;

    ll val = x - 2*y;
    
    if (val >= 0 && val % 3 == 0) {
        ll min_val_needed = 0;
        if (y < 0) {
            min_val_needed = 6 * (-y);
        }
        
        if (val >= min_val_needed) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        cout << "NO\n";
    };
    }
    return 0;
}