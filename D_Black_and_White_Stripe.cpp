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
  int n;
  cin>>n;
  int k;
  cin>>k;
  string s;
  cin>>s;
  int w_count=0;
  ploop(i,0,k){
    if(s[i]=='W') w_count++;
  }
  int min_count=w_count;
  ploop(i,k,n){
    if(s[i-k]=='W') w_count--;
    if(s[i]=='W') w_count++;
    min_count=min(min_count,w_count);

  }
  cout<<min_count<<"\n";
    
}

int main() {
    fastio;
    int t; cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}