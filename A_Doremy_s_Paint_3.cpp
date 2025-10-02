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
  ll n;
  cin>>n;
   ll a[n];
   ploop(i,0,n){
    cin>>a[i];
   }
   map<ll,ll>freq_map;
    ploop(i,0,n) freq_map[a[i]]++;

    if(freq_map.size()>=3) cout<<"No\n";
    else{
      ll freq_1=freq_map.begin()->second;
      ll freq_2=freq_map.rbegin()->second;
      if(freq_1==freq_2) cout<<"yes"<<endl;
      else if(n%2==1 && abs(freq_1-freq_2)==1) cout<<"yes"<<endl;
      else cout<<"No"<<endl;
    }
}

int main() {
    fastio;
    int t; cin>>t;

    while(t--) {
        solve();
    }
    return 0;
}