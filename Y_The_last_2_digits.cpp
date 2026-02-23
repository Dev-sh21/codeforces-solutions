#include <iostream>
using namespace std;
using ll=long long;

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    ll res = 1;
    res = (res * (A % 100)) % 100;
    res = (res * (B % 100)) % 100;
    res = (res * (C % 100)) % 100;
    res = (res * (D % 100)) % 100;

    if (res < 10)
        cout << 0 << res << endl;
    else
        cout << res << endl;

    return 0;
}