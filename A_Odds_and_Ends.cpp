#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Condition 1: Total length odd honi chahiye
    // Condition 2: Pehla element odd hona chahiye
    // Condition 3: Aakhri element odd hona chahiye
    if (n % 2 != 0 && a[0] % 2 != 0 && a[n - 1] % 2 != 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}