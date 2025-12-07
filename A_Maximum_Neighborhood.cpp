#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    auto get_val = [&](int r, int c) {
        return r * n + c + 1;
    };

    long long max_cost = 0;

    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < n; ++c) {
            long long current_cost = get_val(r, c);
            
          
            if (r > 0) current_cost += get_val(r - 1, c);
            if (r < n - 1) current_cost += get_val(r + 1, c);
            if (c > 0) current_cost += get_val(r, c - 1);
            if (c < n - 1) current_cost += get_val(r, c + 1);

            if (current_cost > max_cost) {
                max_cost = current_cost;
            }


        }

    }
    cout << max_cost << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}