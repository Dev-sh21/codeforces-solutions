#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long *a = new long long[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long sum_edges = 0;
        long long max_edge = 0;

        for (int i = 0; i < n; i++) {
            long long x = a[i];
            long long y = a[(i + 1) % n];
            long long w = (x > y ? x : y);   // max(x, y)
            sum_edges += w;
            if (w > max_edge) max_edge = w;
        }

        cout << (sum_edges - max_edge) << "\n";
        delete[] a;
    }

    return 0;
}
