#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Constraint {
    int id;
    int type;
    int l;
    int r;
};

void solve() {
    int n, k, q;
    if (!(cin >> n >> k >> q)) return;

    vector<Constraint> all_constraints(q);
    vector<Constraint> type2_constraints;
    
    vector<bool> type1_mask(n + 1, false);
    vector<bool> type2_mask(n + 1, false);

    for (int i = 0; i < q; ++i) {
        cin >> all_constraints[i].type >> all_constraints[i].l >> all_constraints[i].r;
        all_constraints[i].id = i;

        
        if (all_constraints[i].type == 1) {
            for (int j = all_constraints[i].l; j <= all_constraints[i].r; ++j) {
                type1_mask[j] = true;
            }
        } else {
            type2_constraints.push_back(all_constraints[i]);
            for (int j = all_constraints[i].l; j <= all_constraints[i].r; ++j) {
                type2_mask[j] = true;
            }
        }
    }

    // initialize array with base values
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        if (type1_mask[i] && !type2_mask[i]) {
            // must be >= k (Type 1) and can be k (No Type 2 restriction)
            a[i] = k;
        } else {
            // either covered by Type 2 (must be != k)or no constraints.
            // default to k+1.
            a[i] = k + 1;
        }
    }

    // fill values 0 to k-1 for Type 2 constraints
    for (int v = 0; v < k; ++v) {
        // find which Type 2 constraints don't have value 'v' yet
        vector<int> unsatisfied_indices;
        for (int i = 0; i < type2_constraints.size(); ++i) {
            bool found = false;
            for (int j = type2_constraints[i].l; j <= type2_constraints[i].r; ++j) {
                if (a[j] == v) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                unsatisfied_indices.push_back(i);
            }
        }

        // greedy strategy: sort unsatisfied constraints by their End Point
        sort(unsatisfied_indices.begin(), unsatisfied_indices.end(), 
             [&](int idx_a, int idx_b) {
                 return type2_constraints[idx_a].r < type2_constraints[idx_b].r;
             });

        for (int idx : unsatisfied_indices) {
            int l = type2_constraints[idx].l;
            int r = type2_constraints[idx].r;

            // check if it became satisfied by a recent placement in this loop
            bool found = false;
            for (int j = l; j <= r; ++j) {
                if (a[j] == v) {
                    found = true;
                    break;
                }
            }
            if (found) continue;

            // place v at the rightmost valid position
            for (int pos = r; pos >= l; --pos) {
                // We can only place v < k if:
                // it is NOT covered by Type 1 (since Type 1 min must be k)
                // the slot is currently empty (value > k)
                if (!type1_mask[pos] && a[pos] > k) {
                    a[pos] = v;
                    break;
                }
            }
        }
    }


    for (int i = 1; i <= n; ++i) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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