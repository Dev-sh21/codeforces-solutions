#include <iostream>
#include <vector>
using namespace std;

bool check(long long x) {
    long long d = 0, z = 0;
    while (x) {
        if (x % 10 == 0) z++;
        d++;
        x /= 10;
    }
    return z == d - 1;
}

int main() {
    vector<long long> round_numbers;
    for (long long i = 1; i <= 999999; i++) {
        if (check(i)) round_numbers.push_back(i);
    }

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long ans = 0;
        for (long long x : round_numbers) {
            if (x <= n) ans++;
            else break;
        }
        cout << ans << '\n';
    }
    return 0;
}