#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll=long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<int> b(m);
        for (int i = 0; i < m; ++i) cin >> b[i];

        string gdCode;
        cin >> gdCode;

        sort(b.begin(), b.end());

        vector<vector<int>> pos_triggers(k + 1);
        vector<vector<int>> neg_triggers(k + 1);

        for (int i = 0; i < n; ++i) {
            auto it = lower_bound(b.begin(), b.end(), a[i]);//pahla spike after bots position
// for right side spikes
            if (it != b.end()) {
                ll dist = (ll)*it - a[i];
                if (dist <= k) {
                    pos_triggers[dist].push_back(i);
                }
            }
// left side spike ke liye
            if (it != b.begin()) {
                ll dist = (ll)a[i] - *prev(it);
                if (dist <= k) {
                    neg_triggers[dist].push_back(i);
                }
            }
        }

        int current_disp = 0;
        int max_disp = 0;
        int min_disp = 0;
        int alive_count = n;
        vector<bool> is_dead(n, false);

        for (int i = 0; i < (int)gdCode.size(); i++) {
            char move = gdCode[i];

            if (move == 'L') current_disp--;
            else current_disp++;

            if (current_disp > max_disp) {
                max_disp = current_disp;
                if (max_disp <= k) {
                    for (int idx : pos_triggers[max_disp]) {
                        if (!is_dead[idx]) {
                            is_dead[idx] = true;
                            alive_count--;
                        }
                    }
                }
            } 
            else if (current_disp < min_disp) {
                min_disp = current_disp;
                int dist = -min_disp;
                if (dist <= k) {
                    for (int idx : neg_triggers[dist]) {
                        if (!is_dead[idx]) {
                            is_dead[idx] = true;
                            alive_count--;
                        }
                    }
                }
            }

            cout << alive_count;
            if (i + 1 < gdCode.size()) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}