#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;
using ll=long long;

int main() {
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ans = 0;
        for (int i= 0; i< n; i++) {
            ll x = -a[i]; 
            unordered_set<ll> s;

            for (int j = i; j < n; j++) {
                ll val = a[j] + x;
                if (val >= 0) s.insert(val);
            }

            int mex = 0;
            while (s.count(mex)) mex++;

            ans = max(ans, mex);
        }

        cout << ans << '\n';
    }

    return 0;
}