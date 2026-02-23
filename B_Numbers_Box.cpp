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
        ll n, m;
        cin >> n >> m;
        vector<vector<ll> > a(n, vector<ll>(m));
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < m; j++)
                cin >> a[i][j];

        ll negatives = 0;
        ll minimum = INT_MAX;
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (a[i][j] < 0)
                    negatives++;
                minimum = min(minimum, abs(a[i][j]));
                sum += abs(a[i][j]);
            }
        }
        if (negatives % 2 == 0)
            cout << sum << endl;
        else
            cout << sum - 2 * abs(minimum) << endl;
    }
}

