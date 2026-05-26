#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    int min_mismatch = n + 1;
    vector<int> best_positions;

    for (int i = 0; i <= m - n; i++) {
        vector<int> current_mismatches;
        
        for (int j = 0; j < n; j++) {
            if (s[j] != t[i + j]) {
                current_mismatches.push_back(j + 1);
            }
        }

        if (current_mismatches.size() < min_mismatch) {
            min_mismatch = current_mismatches.size();
            best_positions = current_mismatches;
        }
    }

    cout << min_mismatch << "\n";
    for (int i = 0; i < best_positions.size(); i++) {
        cout << best_positions[i] << (i == best_positions.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}