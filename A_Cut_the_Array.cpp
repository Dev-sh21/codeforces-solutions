#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n+1, 0);

        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<int> pref(n+1, 0);
        for (int i = 1; i <= n; i++) pref[i] = pref[i-1] + a[i];
        
        bool found = false;

        for (int l = 1; l < n && !found; l++) {
            for (int r = l+1; r < n && !found; r++) {
                int s1 = ((pref[l] % 3) + 3) % 3;
                int s2 = (((pref[r] - pref[l]) % 3) + 3) % 3;
                int s3 = (((pref[n] - pref[r]) % 3) + 3) % 3;

                if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)) {
                    cout << l << " " << r << "\n";
                    found = true;
                    break;
                }
            }
        }

        if (!found) cout << "0 0\n";
    }
    return 0;
}
