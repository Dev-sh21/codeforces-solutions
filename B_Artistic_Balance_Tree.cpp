#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> odds, evens;
    long long total_sum = 0;
    
    for (int i = 1; i <= n; ++i) {
        long long a;
        cin >> a;
        total_sum += a;
        if (i % 2 != 0) odds.push_back(a);
        else evens.push_back(a);
    }
    
    int m_odd = 0, m_even = 0;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        if (x % 2 != 0) m_odd++;
        else m_even++;
    }
    
    sort(odds.rbegin(), odds.rend());
    sort(evens.rbegin(), evens.rend());
    
    long long marked_sum = 0;
    
    if (m_odd > 0 && !odds.empty()) {
        marked_sum += odds[0];
        for (int i = 1; i < min((int)odds.size(), m_odd); ++i) {
            if (odds[i] > 0) marked_sum += odds[i];
        }
    }
    
    if (m_even > 0 && !evens.empty()) {
        marked_sum += evens[0];
        for (int i = 1; i < min((int)evens.size(), m_even); ++i) {
            if (evens[i] > 0) marked_sum += evens[i];
        }
    }
    
    cout << total_sum - marked_sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}