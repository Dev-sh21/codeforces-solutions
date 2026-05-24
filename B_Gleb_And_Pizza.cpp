#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    double r, d;
    cin >> r >> d;
    
    int n;
    cin >> n;
    
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        double x, y, ri;
        cin >> x >> y >> ri;
        
        double dist = sqrt(x * x + y * y);
        
        if (dist - ri >= r - d && dist + ri <= r) {
            count++;
        }
    }
    
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}