#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>> n;
        vector<vector<int>> G(n, vector<int>(n));
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                cin >> G[i][j];

        vector<int> P(2*n + 1, 0);

        for (int k = 2; k <= 2 * n; ++k) {
           
            for (int i = 1; i <= n; ++i) {
                int j = k - i;
                if (j >= 1 && j <= n) {
                    P[k] = G[i - 1][j - 1];
                    break;
                }
            }
        }

    
        int total_sum = (2 * n) * (2 * n + 1) / 2;

        
        int partial_sum = 0;
        for (int k = 2; k <= 2 * n; ++k) {
            partial_sum += P[k];
        }

       
        P[1] = total_sum - partial_sum;


        for (int k = 1; k <= 2 * n; ++k) {
            cout << P[k] << " ";
        }
        cout << "\n";
    }

    return 0;
}
