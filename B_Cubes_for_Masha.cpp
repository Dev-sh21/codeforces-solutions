#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<vector<int>> cubes;

bool can_form(int num) {
    string s = to_string(num);
    int len = s.length();
    if (len > n) return false;

    vector<int> p(n);
    for (int i = 0; i < n; i++) p[i] = i;

    do {
        bool possible = true;
        for (int i = 0; i < len; i++) {
            int digit = s[i] - '0';
            int cube_idx = p[i];
            
            if (find(cubes[cube_idx].begin(), cubes[cube_idx].end(), digit) == cubes[cube_idx].end()) {
                possible = false;
                break;
            }
        }
        if (possible) return true;
    } while (next_permutation(p.begin(), p.end()));

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cubes.assign(n, vector<int>(6));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> cubes[i][j];
        }
    }

    int ans = 0;
    for (int i = 1; i <= 1000; i++) {
        if (can_form(i)) {
            ans = i;
        } else {
            break;
        }
    }

    cout << ans << "\n";

    return 0;
}