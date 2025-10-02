#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>  // For LLONG_MAX
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

using ll = long long;
using vll = vector<ll>;

#define ploop(i,a,b) for(int i = (a); i < (b); ++i)

void solve() {
  ll n, q;
  cin >> n >> q;
  vll a(n);
  ploop(i, 0, n) cin >> a[i];
  vll x(q);
  ploop(i, 0, q) cin >> x[i];

  ll prev = LLONG_MAX;
  ploop(i, 0, q) {
    if(x[i] >= prev) continue;
    ll value = pow(2, x[i]);

    ploop(j, 0, n) {
      if(a[j] % value == 0) a[j] += value/2;
    }
    prev = x[i];
  }

  ploop(i, 0, n) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
    fastio;
    int t; 
    cin >> t;  
    while(t--) {
        solve();
    }
    return 0;
}
