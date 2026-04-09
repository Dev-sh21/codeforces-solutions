#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n>>k;
    
    vector<int> a(n+1);
    for (int i=1;i<=n;i++) {
        cin >> a[i];
    }
    
    vector<int> p(k);
    for (int i =0; i <k;i++) {
        cin >> p[i];
    }
    int target =a[p[0]];

    vector<int>b(n+2,0);
    for (int i=1;i<=n;i++) {
        b[i] =(a[i]!=target ? 1 :0);
    }
    vector<int>D(n+1,0);
    for (int i=0;i<=n;i++) {
        D[i] =(b[i] != b[i + 1] ? 1 :0);
    }
    
    vector<int> block_counts;
    int current_ones = 0;
    int p_idx = 0;
    
    for (int i = 0;i<= n;i++) {
        if (p_idx < k && i == p[p_idx]) {
            block_counts.push_back(current_ones);
            current_ones = 0;
            p_idx++;
        }
        if (D[i] == 1) {
            current_ones++;
        }
    }
    block_counts.push_back(current_ones);
    
    int S =0; 
    int M =0; 
    
    for (int count:block_counts) {
        S +=count;
        M = max(M,count);
    }
    cout << max(S/2,M) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}