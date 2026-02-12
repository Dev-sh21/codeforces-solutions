#include <iostream>
using namespace std;
using ll=long long;

ll sumDigits(ll n) {
    ll sum =0;
    while (n>0) {
        sum +=n%10;
        n /=10;
    }
    return sum;
}

void solve() {
    ll x;
    cin >> x;
    
    int count =0;
    for (ll y = x; y <=x+100; y++) {
        if (y -sumDigits(y)==x) {
            count++;
        }
    }
    
    cout <<count<<endl;
}

int main() {   
    int t;
    cin >>t;
    while (t--) {
        solve();
    }
    
    return 0;
}