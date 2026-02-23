#include <iostream>
#include <vector>

using namespace std;


long long count_valid_shifts(int n, const vector<int>& source, const vector<int>& target) {
    long long count = 0;
    vector<int> extended_target = target;
    extended_target.insert(extended_target.end(), target.begin(), target.end());

    for (int s = 0; s < n; ++s) {
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            if (source[i] >= extended_target[i + s]) {
                possible = false;
                break;
            }
        }
        if (possible) {
            count++;
        }
    }
    return count;
}

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) cin >> c[i];
    

    long long cnt_ab = count_valid_shifts(n, a, b);
  
    if (cnt_ab == 0) {
        cout << 0 << "\n";
        return;
    }

    long long cnt_bc = count_valid_shifts(n, b, c);
        long long result = cnt_ab * cnt_bc * (long long)n;
    
    cout << result << "\n";
}

int main() { 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}