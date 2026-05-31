#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int count_ones = 0;
    int count_twos = 0;
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (val == 1) {
            count_ones++;
        } else {
            count_twos++;
        }
    }
    
    int teams_from_pairs = min(count_twos, count_ones);
    count_ones -= teams_from_pairs;
    
    int teams_from_ones = count_ones / 3;
    int total_teams = teams_from_pairs + teams_from_ones;
    
    cout << total_teams << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}