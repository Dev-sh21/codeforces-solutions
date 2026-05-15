#include <iostream>
using namespace std;

int main() {
    int n, s, d, now = 0;
    cin >> n;

    while (n--) {
        cin >> s >> d;
        if (s > now) {
            now = s;
        } else {
            int t = s;
            while (t <= now) t += d;
            now = t;
        }
    }

    cout << now << endl;
    return 0;
}