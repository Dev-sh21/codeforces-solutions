#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pos = s.find('.');
    if (pos == string::npos) {
        cout << "int " << s << endl;
    } 
    else {
        string intPart = s.substr(0, pos);
        string decPart = s.substr(pos + 1);

        bool allZero = true;
        for (char c : decPart) {
            if (c != '0') {
                allZero = false;
                break;
            }
        }

        if (allZero) {
            cout << "int " << intPart << endl;
        } else {
            cout << "float " << intPart << " 0." << decPart << endl;
        }
    }

    return 0;
}