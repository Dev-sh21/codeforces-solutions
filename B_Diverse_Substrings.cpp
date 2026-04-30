#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long count = 0;

    for (int i = 0; i < n; i++) {
        vector<int> freq(10, 0);
        int distinct_count = 0;
        int max_freq = 0;

       
        for (int j = i; j < n && j < i + 100; j++) {
            int digit = s[j] - '0';
            if (freq[digit] == 0) {
                distinct_count++;
            }
            freq[digit]++;
            max_freq = max(max_freq, freq[digit]);

            if (max_freq <= distinct_count) {
                count++;
            }
        }
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}