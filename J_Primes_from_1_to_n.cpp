#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    if (!(cin >> N)) return 0;

    bool first = true;
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
    }
    
    return 0;
}