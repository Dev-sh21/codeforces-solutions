#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int y_count = 0;
        for (char c : s) {
            if (c == 'Y') {
                y_count++;
            }
        }

        if (y_count <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}