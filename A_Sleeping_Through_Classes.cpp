#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int busy_until = -1;   
        int sleep = 0;

        for (int i = 0; i < n; i++) {
            if (i <= busy_until) {

                if (s[i] == '1') {
                    busy_until = max(busy_until, i + k);
                }
            } else {
                if (s[i] == '0') {
                    sleep++;
                } else { 
                    busy_until = i + k;
                }
            }
        }

        cout << sleep << "\n";
    }

    return 0;
}