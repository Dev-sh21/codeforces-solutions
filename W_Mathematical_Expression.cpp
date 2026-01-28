#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    char S, eq;

    cin >> A >> S >> B >> eq >> C;

    int result;

    if (S == '+')
        result = A + B;
    else if (S == '-')
        result = A - B;
    else if (S == '*')
        result = A * B;

    if (result == C)
        cout << "Yes\n";
    else
        cout << result << "\n";

    return 0;
}