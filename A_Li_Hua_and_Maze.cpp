#include <iostream>
#include <algorithm>

using namespace std;

long long count_neighbors(long long n, long long m, long long x, long long y) {
    long long count = 0;
    if (x > 1) count++;
    if (x < n) count++;
    if (y > 1) count++;
    if (y < m) count++;
    return count;
}

void solve() {
    long long n, m, x1, y1, x2, y2;
    cin >> n >> m;
    cin >> x1 >> y1 >> x2 >> y2;

    long long p1 = count_neighbors(n, m, x1, y1);
    long long p2 = count_neighbors(n, m, x2, y2);

    cout << min(p1, p2) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}