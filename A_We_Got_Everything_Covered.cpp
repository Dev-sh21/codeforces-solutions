#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n,k;
    cin >>n>>k;

    string result ="";
    string block ="";
    for (int i = 0; i < k; ++i) {
        block += (char)('a' + i);
    }

    for (int i = 0; i < n; ++i) {
        result += block;
    }

    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}