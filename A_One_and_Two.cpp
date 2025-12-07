#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];

        long long total2 = 0, curr2 = 0, ans = -1;

        for (auto x : v)
            if (x == 2) total2++;

        for (long long i = 0; i < n; i++) {
            if (v[i] == 2) curr2++;
            if (curr2 == total2 - curr2) {
                ans = i + 1;
                break;

            }
        }


        cout << ans << "\n";

    }


    return 0;
}
