#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    long long sum_gt_1 = 0;
    int last_1_idx = -1;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > 1) {
            sum_gt_1 += a[i];
        } else if (a[i] == 1) {
            last_1_idx = i;
        }
    }

    long long ans = 0;

    if (last_1_idx == -1) {
        ans = sum_gt_1;
    } else {
        if (sum_gt_1 == 0) {
            ans = 1;
        } else {
            bool has_gt_1_after_last_1 = false;
            for (int i = last_1_idx + 1; i < n; ++i) {
                if (a[i] > 1) {
                    has_gt_1_after_last_1 = true;
                    break;
                }
            }

            if (has_gt_1_after_last_1) {
                ans = sum_gt_1;
            } else {
                ans = sum_gt_1 + 1;
            }
        }
    }

    cout << ans % 676767677 << "\n";
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