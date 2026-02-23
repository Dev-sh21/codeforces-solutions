#include <iostream>

using namespace std;

void solve() {
    long long n, m;
    if (!(cin >> n >> m)) return;

    // if the starting health is less than or equal to max damage, 
    // you win instantly on the first move.
    if (n <= m) {

        cout << "YES" << endl;
        return;
    }

    if (m % 2 == 0) {

        // case for Even m
        // losing positions are multiples of m+1
        if (n % (m + 1) == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    } else {
        // case for Odd m
        long long target_rem;
        
        // determine the losing remainder based on m mod 4
        if (m % 4 == 1) {
            target_rem = 2;
        } else {
            // m % 4 == 3
            target_rem = 1;
        }

        // Ccheck if n hits the losing remainder modulo m+1
        if (n % (m + 1) == target_rem) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
      }


    return 0;
}