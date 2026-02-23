#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        for (int i = 0; i < n; i++) {
            int current_max = -1000000;
            for (int j = i; j < n; j++) {
                current_max = max(current_max, a[j]);
                cout << current_max << " ";
            }
        }
        cout << endl;
    }
    return 0;
}