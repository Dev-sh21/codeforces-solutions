#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> freq(n + 1,https://www.youtube.com/watch?v=P_mC0wOTNV4&pp=ygUQY29kZXN0b3J5d2l0aE1JSw%3D%3D 0);
        for (int i = 0; i < n; ++i) {
            int x; 
            cin >> x;
            ++freq[x];
        }

        int pairs = 0;
        for (int v = 1; v <= n; ++v) pairs += freq[v] / 2;

        int needed = (n - 1) / 2;
        cout << (pairs >= needed ? "YES\n" : "NO\n");
    }
    return 0;
}