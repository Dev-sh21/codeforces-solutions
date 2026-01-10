#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        ll minimum_s = (k * b);
        ll maximum_s = (k * b) + (k - 1) * n;
        if(s < minimum_s || s > maximum_s)
            cout << "-1" << endl;
        else
        {
            vector<ll> ans(n, 0);
            ans[0] = minimum_s;
            s -= minimum_s;
            for (int i = 0; i < n; i++) 
            {
                ll add = min(k - 1, s);
                ans[i] += add;
                s -= add;
            }
            for (ll i = 0; i < n; i++) 
                cout << ans[i] << " ";
            cout << endl;
        }
    }
}
