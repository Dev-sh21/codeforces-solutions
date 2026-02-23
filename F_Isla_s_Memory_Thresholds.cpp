#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n, q;
    if (!(cin >> n >> q)) return;

    // Use 1-based indexing for convenience with prefix sums
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    // Precompute prefix sums
    vector<long long> P(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        P[i] = P[i - 1] + a[i];
    }

    while (q--) {
        int l, r;
        long long x;
        cin >> l >> r >> x;

        long long cnt = 0;
        int curr = l;

        while (curr <= r) {
            // OPTIMIZATION 1: Handle single element resets (len = 1) efficiently.
            // Since 'a' is descending, elements >= x form a prefix of the current range.
            if (a[curr] >= x) {
                // Find the first element strictly less than x in range [curr, r].
                // std::upper_bound with greater<>() works on descending arrays 
                // to find the first element where (elem > x) is false (i.e., elem <= x? No).
                // Actually, upper_bound with greater finds the first element such that (x > elem).
                auto it = upper_bound(a.begin() + curr, a.begin() + r + 1, x, greater<long long>());
                
                int idx = distance(a.begin(), it); // Index of first element < x
                // Elements from curr to idx-1 are >= x.
                // Each of them triggers a reset immediately.
                int num = idx - curr;
                cnt += num;
                curr = idx;
                continue;
            }

            // GENERAL CASE: We need multiple elements to reach sum x.
            
            // 1. Find the smallest 'end_idx' such that sum(curr...end_idx) >= x
            long long target = P[curr - 1] + x;
            auto it = lower_bound(P.begin() + curr, P.end(), target);

            // If we can't reach sum x even using all remaining elements
            if (it == P.end()) {
                break;
            }

            int end_idx = distance(P.begin(), it);
            
            // If the segment extends beyond the query range r
            if (end_idx > r) {
                break;
            }

            int len = end_idx - curr + 1;

            // 2. We found a valid step size 'len'. 
            // Since 'a' is non-increasing, the sum of a window of size 'len' decreases as we slide right.
            // We want to find the farthest starting position 'best_start' in [curr, r - len + 1]
            // such that sum(best_start ... best_start + len - 1) >= x.
            
            int low = curr;
            int high = r - len + 1;
            int best_start = curr;

            // Binary Search
            while (low <= high) {
                int mid = low + (high - low) / 2;
                // Check sum of segment of size 'len' starting at 'mid'
                long long seg_sum = P[mid + len - 1] - P[mid - 1];
                if (seg_sum >= x) {
                    best_start = mid;
                    low = mid + 1; // Try to go further right
                } else {
                    high = mid - 1; // Sum too small, move left
                }
            }

            // 3. Calculate how many steps of size 'len' fit into [curr, best_start]
            // The last jump starts at index: curr + (jumps - 1) * len
            // We need: curr + (jumps - 1) * len <= best_start
            int jumps = (best_start - curr) / len + 1;

            cnt += jumps;
            curr += jumps * len;
        }

        // Calculate remaining sum held in buffer
        long long final_sum = 0;
        if (curr <= r) {
            final_sum = P[r] - P[curr - 1];
        }

        cout << cnt << " " << final_sum << "\n";
    }
}

int main() {
    // Fast I/O is critical
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