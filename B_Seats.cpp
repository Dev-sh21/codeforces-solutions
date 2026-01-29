#include <iostream>
#include <string>
#include <vector>

using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int curr_std = 0;
    int first = -1;
    int last = -1;

    for (int i = 0; i <n;i++) {
        if (s[i] == '1') {
            curr_std++;
            if (first == -1) first = i;
            last = i;
        }
    }

    if (curr_std == 0) {
        cout << (n + 2) / 3 << endl;// == ceil of (n/3) hai
        return;
    }

    int added_std = 0;
    added_std += (first + 1)/3;

    added_std += (n - 1 - last +1)/3;

    int curr_zero = 0;
    for (int i = first + 1; i <last;i++) {
        if (s[i] == '0') {
            curr_zero++;
        } else {
            added_std += curr_zero/3;
            curr_zero = 0;
        }
    }
    added_std += curr_zero/3;

    cout << curr_std + added_std <<endl;
}

int main() {  
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}