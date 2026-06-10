#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> N = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> L = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    vector<int> master;
    master.insert(master.end(), L.begin(), L.end());
    master.insert(master.end(), N.begin(), N.end());
    master.insert(master.end(), N.begin(), N.end());
    master.insert(master.end(), N.begin(), N.end());
    master.insert(master.end(), L.begin(), L.end());

    bool possible = false;
    
    for (int i = 0; i <= master.size() - n; i++) {
        bool match = true;
        for (int j = 0; j < n; j++) {
            if (master[i + j] != a[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}