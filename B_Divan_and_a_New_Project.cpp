#include <iostream>
#include<vector>
#include<map>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) 
            cin >> a[i];

        vector<pair<ll, ll> > building_map;
        for (int i = 0; i < n; i++) // n
            building_map.push_back({a[i], i});

        sort(building_map.rbegin(), building_map.rend()); 

        vector<ll> ans(n + 1, 0);

        ans[0] = 0;

        ll minutes = 0;
        ll coordinate = 1;
        for (int i = 0; i < n; i++)
        {
            ans[building_map[i].second + 1] = coordinate;
            minutes += (2 * abs(coordinate) * building_map[i].first);
            if (coordinate < 0)
                coordinate = abs(coordinate) + 1;
            else
                coordinate = -coordinate;
        }
        
        cout << minutes << endl;
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
        
    }
}


