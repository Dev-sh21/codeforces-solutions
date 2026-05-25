#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) continue;

            bool found = false;
            for (int r = 0; r < n; r++) {
                for (int c = 0; c < n; c++) {
                    if (grid[i][r] + grid[c][j] == grid[i][j]) {
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }

            if (!found) {
                cout << "No\n";
                return;
            }
        }
    }

    cout << "Yes\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}