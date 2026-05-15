#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();

    vector<int> a(n + 1, 0), b(n + 1, 0);

    for (int i = 0; i < n; i++) {
        a[i + 1] = a[i] + (s[i] == 'a');
        b[i + 1] = b[i] + (s[i] == 'b');
    }

    int max_len = 0;

    for (int i = 0; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            int part1 = a[i];
            int part2 = b[j] - b[i];
            int part3 = a[n] - a[j];

            max_len = max(max_len, part1 + part2 + part3);
        }
    }

    cout << max_len << endl;

    return 0;
}