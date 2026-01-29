#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
    if (!(cin >> n)) return 0;
    vector<int> p(n + 1);
    p[n] =1;
    
    int sign =1;
    for (int i = n-1; i >=1; --i) {
        p[i] = p[i+1]+ sign*i;
        sign = -sign; 
    }

    for (int i =1; i <=n; ++i) {
        cout << p[i] << (i == n ? "" : " ");
    }
    cout <<"\n";
        }
    }
    return 0;
}