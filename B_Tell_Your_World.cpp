#include <iostream>
#include <vector>

using namespace std;

int n;
vector<long long> y;

bool check(int p1, int p2) {
    long long dx = p2 - p1;
    long long dy = y[p2] - y[p1];

    vector<int> other_line;

    for (int i = 0; i < n; i++) {
        if (i == p1 || i == p2) continue;

        if ((y[i] - y[p1]) * dx == (i - p1) * dy) {
            continue; 
        } else {
            other_line.push_back(i); 
        }
    }

    if (other_line.empty()) return false;
    if (other_line.size() == 1) return true;

    int first_other = other_line[0];
    for (int i = 1; i < other_line.size(); i++) {
        int curr = other_line[i];
        if ((y[curr] - y[first_other]) * dx != (curr - first_other) * dy) {
            return false;
        }
    }

    return true; 
}

void solve() {
    cin >> n;
    y.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    if (check(0, 1) || check(0, 2) || check(1, 2)) {
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