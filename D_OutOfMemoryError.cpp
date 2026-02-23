#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        ll h;
        cin >> n>>m>> h;  

        vector<ll> a(n);
        vector<ll> original(n);

        for (int i = 0;i < n; ++i) {
            cin >> a[i];
            original[i] = a[i];
        }

        vector<int>history;

        for (int i = 0; i <m; ++i) {
            int b;
            ll c;
            cin >> b >> c;
            b--;
            a[b] += c;
            history.push_back(b);

            if (a[b]>h) {
                for (int idx:history) {
                    a[idx] = original[idx];
                }
                history.clear();
            }
        }

        for (int i = 0; i< n;++i) {
            cout << a[i]<< (i == n - 1 ? "" : " ");
        }
        cout <<"\n";
    }
    return 0;
}