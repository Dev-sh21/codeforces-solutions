#include <iostream>
#include <string>
using namespace std;

int minLen(string s) {
    int m = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1]) {
            m++;
        }
    }
    return m;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minLen(s) << endl;
    }
    return 0;
}
