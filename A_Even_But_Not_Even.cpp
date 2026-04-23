#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n; 
    string s;
    // You MUST read n first!
    if (!(cin >> n >> s)) return; 

    string result = "";
    int odd_count = 0;

    for (char c : s) {
        if ((c - '0') % 2 != 0) {
            result += c;
            odd_count++;
        }
        if (odd_count == 2) break;
    }

    if (odd_count == 2) 
        cout << result << "\n";
    else 
        cout << "-1" << "\n";
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}