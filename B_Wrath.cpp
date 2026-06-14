#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> L(n);
    for (int i = 0; i < n; i++) {
        cin >> L[i];
    }

    int alive = 0;
    int kill_limit = n;

    for (int i = n - 1; i >= 0; i--) {
        if (i < kill_limit) {
            alive++;
        }
        kill_limit = min(kill_limit, max(0, i - L[i]));
    }

    cout << alive << "\n";

    return 0;
}