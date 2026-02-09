#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, w;
        cin >> n >> w;
        cout << n - (n / w) << endl;
    }
    return 0;
}