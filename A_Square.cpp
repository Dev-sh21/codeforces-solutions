#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int sticks[4] = {a, b, c, d};
        sort(sticks, sticks + 4);
        if (sticks[0] == sticks[3]) cout << "YES\n";

        else cout << "NO\n";
    }

    return 0;
}