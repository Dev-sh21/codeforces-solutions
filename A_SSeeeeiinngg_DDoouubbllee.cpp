#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

void solve() {
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    

    cout << s << r << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}