#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to store a reachable value and the steps taken to reach it
struct State {
    long long val;
    int steps;
    
    // Custom comparator to sort by value
    bool operator<(const State& other) const {
        return val < other.val;
    }
};

void solve() {
    int n;
    cin >> n;
    
    vector<State> all_states;
    // Reserve capacity to prevent reallocation overhead (max ~60 steps per element)
    all_states.reserve(n * 60); 
    
    for (int i = 0; i < n; ++i) {
        long long curr;
        cin >> curr;
        
        int steps = 0;
        // Generate the path until it hits the 1 <-> 2 cycle
        while (curr > 2) {
            all_states.push_back({curr, steps});
            if (curr % 2 == 0) {
                curr /= 2;
            } else {
                curr += 1;
            }
            steps++;
        }
        
        // Handle the final landing on 1 or 2
        if (curr == 1) {
            all_states.push_back({1, steps});
            all_states.push_back({2, steps + 1}); // 1 can reach 2 in 1 step
        } else if (curr == 2) {
            all_states.push_back({2, steps});
            all_states.push_back({1, steps + 1}); // 2 can reach 1 in 1 step
        }
    }
    
    // Sort all recorded states by value to easily group them
    sort(all_states.begin(), all_states.end());
    
    long long min_ops = -1;
    int m = all_states.size();
    
    // Iterate through the sorted states to find a valid common target
    for (int i = 0; i < m; ) {
        int j = i;
        long long current_val = all_states[i].val;
        long long current_ops_sum = 0;
        int count = 0;
        
        // Group all identical values together
        while (j < m && all_states[j].val == current_val) {
            current_ops_sum += all_states[j].steps;
            count++;
            j++;
        }
        
        // If the count equals 'n', all elements can reach this target
        if (count == n) {
            if (min_ops == -1 || current_ops_sum < min_ops) {
                min_ops = current_ops_sum;
            }
        }
        
        i = j; // Move forward to the next unique value
    }
    
    cout << min_ops << "\n";
}

int main() {
    // Fast I/O
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