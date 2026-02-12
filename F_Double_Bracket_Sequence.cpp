#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >>n;
    string s;
    cin >>s;

    int round_open =0;
    int square_open =0;
    int pairs =0;

    for (char c : s) {
        if (c == '(') {
            round_open++;
        } else if (c == ')') {
            if (round_open >0) {
                round_open--;
                pairs++;
            }
        } else if (c == '[') {
            square_open++;
        } else if (c == ']') {
            if (square_open >0) {
                square_open--;
                pairs++;
            }
        }
    }

    cout << (n / 2) - pairs<< endl;
}

int main() {
    int t;
    cin >>t;
    while (t--) {
        solve();
    }
    return 0;
}