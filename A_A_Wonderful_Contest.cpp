#include <iostream>
#include <vector>
#include <numeric>

int gcd(int a, int b) {
    while (b) {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    if (!(std::cin >> n)) return;

    std::vector<int> a(n);
    int current_gcd = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        int score_per_subtask = 100 / a[i];
        
        if (i == 0) {
            current_gcd = score_per_subtask;
        } else {
            current_gcd = gcd(current_gcd, score_per_subtask);
        }
    }

    if (current_gcd == 1) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}