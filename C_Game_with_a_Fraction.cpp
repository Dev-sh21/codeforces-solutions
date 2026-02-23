#include <iostream>
using namespace std;

void solve() {
    long long p,q;
    cin >> p>>q;
    if (3 * p >= 2 * q && p<q) {
        cout <<"Bob\n";
    } else {
        cout <<"Alice\n";
    }
}

int main() {
    int t;
    if (cin >>t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}