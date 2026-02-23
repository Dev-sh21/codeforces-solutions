#include <iostream>
using namespace std;

int main() {
    int a, b, f = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        int t = i, ok = 1;
        while (t) {
            if (t % 10 != 4 && t % 10 != 7) ok = 0;
            t /= 10;
        }
        if (ok) {
            cout << i << " ";
            f = 1;
        }
    }
    if (!f) cout << -1;
    return 0;
}