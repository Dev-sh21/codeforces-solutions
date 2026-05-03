#include <iostream>
#include <vector>

using namespace std;

long long MOD = 1000000007;
const int MAX = 100005;
long long fact[MAX];

void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

void solve() {
    long long n;
    if (!(cin >> n)) return;
    if (n == 1) {
        cout << "0\n";
        return;
    }
    long long n_mod = n % MOD;
    long long ans = (fact[n] * ((n_mod * (n_mod - 1 + MOD) % MOD) % MOD)) % MOD;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}