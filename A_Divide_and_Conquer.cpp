#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    long long sum = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    if(sum % 2 == 0) {
        cout << 0 << "\n";
    } 
    else {
        int min_ops = 1e9; 
        
        for(int i = 0; i < n; i++) {
            int current_val = arr[i];
            int ops = 0;
            int original_parity = current_val % 2;
            
            while(current_val > 0 && current_val % 2 == original_parity) {
                current_val /= 2;
                ops++;
            }
            
            min_ops = min(min_ops, ops);
        }
        
        cout << min_ops << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}