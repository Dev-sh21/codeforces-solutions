#include <iostream>
using ll=long long;
using namespace std;

ll get_gcd(ll a,ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        ll n,m,a,b;
        cin >>n>>m>>a>> b;
    
        if (get_gcd(a, n)==1 && get_gcd(b,m) == 1 && get_gcd(n, m)<= 2) {
            cout <<"YES\n";
        } else {
            cout <<"NO\n";
        }
    }
    
    return 0;
}