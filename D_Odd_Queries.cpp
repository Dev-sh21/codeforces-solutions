#include <iostream>
#include<vector>
using namespace std;
using ll=long long;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        ll old_sum = 0;
        for (int i = 0; i < n; i++) 
            old_sum += a[i];

        vector<ll> prefix_sum(n + 1, 0);
        for (int i = 1; i <= n; i++) 
            prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum_to_remove = prefix_sum[r] - prefix_sum[l - 1];
            ll sum_to_add = (r - l + 1) * k;
            ll total_sum = old_sum - sum_to_remove + sum_to_add;
            if (total_sum % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}

