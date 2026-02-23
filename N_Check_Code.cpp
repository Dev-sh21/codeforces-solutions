#include <iostream>
#include <string>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    if (S[A] != '-') {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < S.length(); i++) {
        if (i == A) continue;
        if (S[i] < '0' || S[i] > '9') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}