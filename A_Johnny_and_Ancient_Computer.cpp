#include <iostream>
#include<cmath>
using namespace std;
using ll=long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ra = a;
        ll rb = b;
        while (ra % 2 == 0) 
            ra /= 2;
        while (rb % 2 == 0) 
            rb /= 2;

        if (ra != rb)
            cout << -1 << endl;
        else
        {
            a /= ra;
            b /= rb;
            a = log2(a); 
            b = log2(b); 
            ll ans = ceil(abs(a - b) / 3.0);
            cout << ans << endl;
        }
    }
    return 0;
}
