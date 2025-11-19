#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                found = true;
                break;
            }
        }
        
        cout << (found ? "YES\n" : "NO\n");
    }
    return 0;
}