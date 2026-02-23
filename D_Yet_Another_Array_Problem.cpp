#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll gcd_ll(ll a, ll b) {
    while (b != 0) {
        ll temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

bool divides(ll x, ll y) 
{ return (y % x == 0); }

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        ll g = 0;
        for (auto &x : a) g = gcd_ll(g, x);

        if (g == 1) {
            cout << 2 << "\n";
            continue;
        }

        vector<ll> primes;
        ll G = g;
        for (ll p = 2; p * p <= G; ++p) {
            if (G % p == 0) {
                primes.push_back(p);
                while (G % p == 0) G /= p;
            }
        }
        if (G > 1) primes.push_back(G);

        vector<ll> candidate_primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
        
        ll answer = -1;
        for (ll x : candidate_primes) {
            bool divides_any = false;
            for (ll p : primes) {
                if (x % p == 0) {
                    divides_any = true;
                    break;
                }
            }
            if (!divides_any && x >= 2) {
                answer = x;
                break;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
