#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int position = -1;

    for (int i = 1; i <= b + 5; i++) {
        a *= 10;
        int current_digit = a / b;

        if (current_digit == c) {
            position = i;
            break;
        }

        a %= b;
    }

    cout << position << "\n";

    return 0;
}