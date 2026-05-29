#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string first, last;
    cin >> first >> last;

    string ans = "";
    ans += first[0];

    for (int i = 1; i < first.length(); i++) {
        if (first[i] < last[0]) {
            ans += first[i];
        } else {
            break;
        }
    }

    ans += last[0];
    cout << ans << "\n";

    return 0;
}