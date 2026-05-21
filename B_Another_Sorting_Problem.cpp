#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> P(n);
    P[0] = a[0];
    for (int i = 1; i < n; i++) {
        P[i] = max(P[i - 1], a[i]);
    }

    vector<long long> SM(n);
    SM[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        SM[i] = min(SM[i + 1], a[i]);
    }


    for (int i = 0; i < n; i++) {
        if (P[i] > a[i] && a[i] > SM[i]) {
            cout << "NO\n";
            return;
        }
    }


    long long L = -1;
    long long R = 2e18; 
    long long max_S1 = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] < P[i]) {
   
            L = max(L, P[i - 1] - a[i]);
            max_S1 = max(max_S1, a[i]);
        } else {
            
            if (max_S1 != -1) {
                R = min(R, a[i] - max_S1);
            }
        }
    }

    
    if (L <= R) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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