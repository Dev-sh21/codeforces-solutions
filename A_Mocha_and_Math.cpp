#include <iostream>
#include <vector>
using namespace std;
using ll=long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) 
            cin >> a[i];

        ll total_and = a[0];
        for (ll i = 1; i < n; i++) 
            total_and &= a[i];

        cout << total_and << endl;
    }
    
    return 0;
}

