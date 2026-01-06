#include<iostream>
#include<vector>
using ll=long long;
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll> > health_points(n);
        for (ll i = 0; i < n; i++) 
        {
            ll x;
            cin >> x;
            health_points[i] = { x, i + 1 };
        }

        for (ll i = 0; i < n; i++) 
        {
            health_points[i].first = health_points[i].first % k;
            if (health_points[i].first == 0)
                health_points[i].first = k;
        }

        sort(health_points.begin(), health_points.end(), [&](pair<ll, ll> a, pair<ll, ll> b) {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        }); 

        for (auto it : health_points) 
            cout << it.second << " ";
        cout << endl;
    }
    return 0;
}

