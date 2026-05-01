#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n < 4) {
        cout << "NO\n";
        return;
    }

    vector<vector<int>> first_pos(26, vector<int>(26, -1));

    for (int i = 0; i < n - 1; ++i) {
        int c1 = s[i] - 'a';
        int c2 = s[i + 1] - 'a';

        if (first_pos[c1][c2] == -1) {
            first_pos[c1][c2] = i;
        } else if (first_pos[c1][c2] < i - 1) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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