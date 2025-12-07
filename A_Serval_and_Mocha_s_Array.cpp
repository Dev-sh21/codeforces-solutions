#include <iostream>
#include <vector>
#include <numeric>   // for std::gcd
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int flag = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (std::gcd(a[i], a[j]) <= 2)
                    flag = 1;
            }
        }

        if (flag == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    
    return 0;
}
