#include <iostream>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char piece;
    int white = 0, black = 0;

    for (int i = 0; i < 64; ++i) {
        cin >> piece;
        if (piece == '.') continue;

        int w = 0;
        char low = tolower(piece);

        if (low == 'q') w = 9;
        else if (low == 'r') w = 5;
        else if (low == 'b') w = 3;
        else if (low == 'n') w = 3;
        else if (low == 'p') w = 1;

        if (isupper(piece)) white += w;
        else black += w;
    }

    if (white > black) cout << "White" << endl;
    else if (black > white) cout << "Black" << endl;
    else cout << "Draw" << endl;

    return 0;
}