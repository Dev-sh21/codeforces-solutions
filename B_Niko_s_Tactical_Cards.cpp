#include <iostream>
#include<vector>
using namespace std;
using ll=long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        ll best_pos = 0;  
        ll best_neg = 0; 


        for (int i = 0; i< n; i++) {
            ll r1 = best_pos -a[i];
            ll r2 = best_neg -a[i];
            
            ll bl1 = b[i] - best_pos;
            ll bl2 = b[i] - best_neg;

            ll new_best_pos =max({r1, r2, bl1, bl2});
            ll new_best_neg =min({r1, r2, bl1, bl2});


            best_pos =new_best_pos;
            best_neg =new_best_neg;
        }

        cout << best_pos << "\n";


    }

    return 0;
}