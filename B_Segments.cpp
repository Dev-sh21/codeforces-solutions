#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;
    if (n % 2 == 0) {
        ans = (n / 2) * ((n / 2) + 1);
    } else {
        ans = ((n + 1) / 2) * ((n + 1) / 2);
    }

    cout << ans << "\n";

    return 0;
}