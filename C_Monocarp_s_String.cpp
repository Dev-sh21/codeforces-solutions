#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define ploop(i,a,b) for(int i = (a); i < (b); ++i)
#define nloop(i,a,b) for(int i = (a); i >= (b); --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

const ll MOD = 1e9+7;
inline ll addMod(ll a, ll b) { return (a + b) % MOD; }
inline ll subMod(ll a, ll b) { return (a - b + MOD) % MOD; }
inline ll mulMod(ll a, ll b) { return (a * b) % MOD; }
ll powMod(ll base, ll exp) {
    ll res = 1;
    while(exp) {
        if (exp & 1) res = mulMod(res, base);
        base = mulMod(base, base);
        exp >>= 1;
    }
    return res;
}

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << "\n"
#else
#define debug(x)
#endif

void solve() {
    int t;
    if (!(cin >> t)) return;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int totalA = 0, totalB = 0;
        for (char c : s) {
            if (c == 'a') ++totalA;
            else ++totalB;
        }

        if (totalA == totalB) {
            cout << 0 << '\n';
            continue;
        }

        int D = totalA - totalB;
        int offset = n;
        vector<int> last(2 * n + 1, -1);
        last[offset] = 0;
        int prefix = 0;
        int ans = n + 1;

        for (int i = 1; i <= n; ++i) {
            prefix += (s[i-1] == 'a' ? 1 : -1);
            int need = prefix - D;
            if (need >= -n && need <= n) {
                int idx = need + offset;
                if (last[idx] != -1) {
                    ans = min(ans, i - last[idx]);
                }
            }
            last[prefix + offset] = i;
        }

        if (ans == n + 1 || ans == n) cout << -1 << '\n';
        else cout << ans << '\n';
    }
}

int main() {
    fastio;
    solve();
    return 0;
}