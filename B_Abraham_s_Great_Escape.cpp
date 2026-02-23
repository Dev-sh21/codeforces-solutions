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
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int m = n * n - k;
        if (m == 1) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        vector<vector<char>> grid(n, vector<char>(n, 'R'));

        if (m == 0) {
         
        } 
        else if (n == 2 && m == 3) {
            grid[0][0] = 'U'; grid[0][1] = 'D';
            grid[1][0] = 'R'; grid[1][1] = 'L';
        } else {
            int col = 0, rem = m;
            while (rem > 0) {
                int take = min(n, rem);
                for (int i = 0; i < take - 1; ++i) grid[i][col] = 'D';
                if (take >= 2) grid[take - 1][col] = 'U';
                rem -= take;
                ++col;
            }
          
            if (rem == 1) {
                for (int i = col - 1; i >= 0; --i) {
                    int count = 0;
                    for (int x = 0; x < n; ++x) if (grid[x][i] != 'R') ++count;
                    if (count >= 3) {
                        grid[count - 1][i] = 'D';  
                        --count;
                        grid[n - 1][col] = 'D';   
                        grid[n - 2][col] = 'U';
                        break;
                    }
                }
            }
        }

        for (auto &row : grid) {
            for (char c : row) cout << c;
            cout << '\n';
        }
    }
}

int main() {
    fastio;
    solve();
    return 0;
}
