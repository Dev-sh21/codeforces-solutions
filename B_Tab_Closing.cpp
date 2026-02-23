#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        long long m0 = a / b;   

        long long ans;

        if (n <= m0) {
            ans = 1;            
        } else {
            if (a == b)
                ans = 1;        
            else
                ans = 2;       
        }

        cout << ans << "\n";
    }
    

    return 0;
}
