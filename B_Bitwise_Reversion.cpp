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

int solve(ll x, ll y, ll z) {
  ploop(i,0,32)
  {
    int xi=x>>i &1;
    int yi= y>>i &1;
    int zi=z>>i &1;
    if(!((xi==0 && yi==0 &&zi==0 )||
  (xi==0 && yi==1 &&zi==0 )||
  (xi==0 && yi==0 &&zi==1 )||
  (xi==1 && yi==0 &&zi==0 )||
  (xi==1 && yi==1 &&zi==1 )
)){
  return false;
}
  }return true;


    
}

int main() {
    fastio;
    int t; cin>>t;
    while(t--) {
      ll x,y,z;
      cin>>x>>y>>z;
        if(solve(x,y,z)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}