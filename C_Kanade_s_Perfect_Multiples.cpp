#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long k;
    if (!(cin >> n >> k)) return;
    
    vector<long long> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Step 1: Sort and remove duplicates to work with unique elements efficiently
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    
    int m = a.size();
    // 'is_covered' tracks if an element is already a multiple of a chosen element in B
    vector<bool> is_covered(m, false); 
    vector<long long> B;

    // Step 2: Iterate through unique elements
    for(int i = 0; i < m; ++i) {
        // If this element is already covered by a previous divisor in B, we don't need to add it
        if(is_covered[i]) continue;

        long long val = a[i];
        long long count_needed = k / val;

        // Optimization: If we need more multiples than we have elements, it's impossible.
        if(count_needed > m) { 
            cout << -1 << "\n";
            return;
        }

        // Verify validity: Check if all multiples of 'val' <= k are in 'a'
        // We iterate j from 1 because we need to mark 'val' itself and subsequent multiples
        for(long long j = 1; j <= count_needed; ++j) {
            long long target = val * j;
            
            // Binary search to check existence
            auto it = lower_bound(a.begin(), a.end(), target);
            
            // If target is not found, 'val' is invalid.
            // Since 'val' was not covered by any previous number, and is invalid itself,
            // no solution exists.
            if(it == a.end() || *it != target) {
                cout << -1 << "\n";
                return;
            }
            
            // If valid, mark this multiple as covered so we don't pick it as a base for B later
            if(j > 1) {
                int idx = distance(a.begin(), it);
                is_covered[idx] = true;
            }
        }
        
        // If we passed the checks, add to our result set
        B.push_back(val);
    }

    // Output result
    cout << B.size() << "\n";
    for(size_t i = 0; i < B.size(); ++i) {
        cout << B[i] << (i == B.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while(t--) {
            solve();
        }
    }
    return 0;
}