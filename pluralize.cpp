#include <iostream>
#include <vector>
using namespace std;

string convertToPlural(const string &word) {
    return word.substr(0, word.size() - 2) + "i";
}

int main() {
    int t;
    cin >> t;
    vector<string> results;
    
    while (t--) {
        string w;
        cin >> w;
        results.push_back(convertToPlural(w));
    }
    
    for (const string &res : results) {
        cout << res << "\n";
    }
    
    return 0;
}
