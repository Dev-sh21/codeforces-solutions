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
        int n,k;
        cin >>n>> k;
        string s; 
        cin>> s;

        int cnt0= 0,cnt1= 0;
        for (char c:s) {
            if (c=='0') ++cnt0;
            else if (c=='1') ++cnt1;
        }
        int tmin =cnt0;
        int tmax=k - cnt1;
        string ans(n,'+');
        ploop(i,1,n){
            ll low =(ll)i-(n- k);
            ll high = (ll)i- 1;
            ll L = max((ll)tmin,low);
            ll R = min((ll)tmax,high);
            if (L<=R) {
                bool def_alive = (tmin >= low) && (tmax <= high);
                ans[i-1]=def_alive? '+': '?';
            } else {
                ans[i-1] = '-';
            }
        }
        cout <<ans << '\n';
    }
}

int main() {
    fastio;
    solve();
    return 0;
}
