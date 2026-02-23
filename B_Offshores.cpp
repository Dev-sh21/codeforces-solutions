#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll=long long;

void solve() {
    ll n,x,y;
    cin >> n>>x>>y;
    
    vector<ll> a(n);
    ll total_transMoney =0;
    
    for (int i=0;i<n;i++) {
        cin >>a[i];
        total_transMoney +=(a[i]/x)*y;
    }
    
    ll max_money=0;
    for (int i = 0;i<n;i++) {
        ll current =a[i] + total_transMoney - (a[i] / x) * y;
        max_money = max(max_money, current);
    }
    
    cout <<max_money<< "\n";
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}