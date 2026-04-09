#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count1 = 0;
        int others = 0;

        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
            if (h == 1) {
                count1++;
            } else {
                others++;
            }
        }
        int ans = (count1 + 1) / 2 + others;
        
        cout << ans << '\n';
    }
    return 0;
}