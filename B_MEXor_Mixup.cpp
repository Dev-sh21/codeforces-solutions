#include <iostream>
using namespace std;
using ll=long long;

ll xor_till(ll n)
{
    ll a = n % 4;
    if (a == 0)
        return n;
    else if (a == 1)
        return 1;
    else if (a == 2)
        return n + 1;
    else
        return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll arr_xor = xor_till(a - 1);

        if (arr_xor == b)
            cout << a << endl;
        else if ((arr_xor ^ b) != a)
            cout << a + 1 << endl;
        else
            cout << a + 2 << endl;
    }
}

