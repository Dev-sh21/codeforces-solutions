#include <iostream>
#include <vector>
#include <numeric>
using ll=long long;

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    
    ll sum_a =0;
    for (int i = 0;i<n;i++) {
        int a;
        cin >> a;
        sum_a += a;
    }
    
    if (sum_a %2!= 0 || (n * k) % 2 == 0) {
        cout <<"YES"<< endl;
    } else {
        cout <<"NO"<< endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >>t;
    while (t--) {
        solve();
    }
    return 0;
}