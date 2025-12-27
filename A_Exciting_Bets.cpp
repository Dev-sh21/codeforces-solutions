#include <iostream>
using ll=long long;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (b > a)
            swap(a, b); 

        if (a == b)
            cout << 0 << " " << 0 << endl;
        else
        {
            ll gcd = a - b;
            ll moves = min(b % gcd, gcd - b % gcd); 
            cout << gcd << " " << moves << endl;
        }
    }
    return 0;
}
