#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long yellow_c, blue_c;
    cin >> yellow_c >> blue_c;
    
    long long yb, gb, bb;
    cin >> yb >> gb >> bb;

    long long req_yel = (2 * yb) + gb;
    long long req_blue = gb + (3 * bb); 

    long long lack_yellow = max(0LL, req_yel - yellow_c);
    long long lack_blue = max(0LL, req_blue - blue_c);

    cout << lack_yellow + lack_blue << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}