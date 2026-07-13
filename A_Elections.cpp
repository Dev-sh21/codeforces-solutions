#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> city_wins(n + 1, 0);

    for (int i = 0; i < m; i++) {
        long long max_votes = -1;
        int city_winner = -1;

        for (int j = 1; j <= n; j++) {
            long long votes;
            cin >> votes;

            if (votes > max_votes) {
                max_votes = votes;
                city_winner = j;
            }
        }
        city_wins[city_winner]++;
    }

    int final_winner = 1;
    int max_cities = -1;

    for (int i = 1; i <= n; i++) {
        if (city_wins[i] > max_cities) {
            max_cities = city_wins[i];
            final_winner = i;
        }
    }

    cout << final_winner << "\n";

    return 0;
}