#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        long long min_ans = 1e18;
        long long min_prefix = arr[1] - 1;

        for (int j = 2; j <= n; j++) {
            long long current_val = arr[j] + j + min_prefix;
            min_ans = min(min_ans, current_val);
            min_prefix = min(min_prefix, arr[j] - j);
        }
        cout << min_ans << endl;
    }
    return 0;
}