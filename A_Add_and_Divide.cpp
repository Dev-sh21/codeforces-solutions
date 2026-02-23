#include <iostream>
using namespace std;
using ll=long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll ans = INT_MAX;
        for (int addition = 0; addition < 32; addition++) 
        {
            ll operations = addition;
            ll new_b = b + addition;
            if (new_b == 1)
                continue;
            ll copy_a = a;
            while (copy_a > 0) 
            {
                copy_a /= new_b;
                operations++;
            }
            ans = min(ans, operations);
        }
        cout << ans << endl;
    }
}
