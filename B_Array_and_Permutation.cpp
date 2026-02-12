#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n), a(n);
    for (int i = 0;i<n;i++) cin >>p[i];
    for (int i=0;i<n; i++) cin >>a[i];

    int j=0;      
    int last =-1;   

    for (int i = 0; i < n;i++) {
        if (a[i] == last) continue;   
        last = a[i];

        while (j <n && p[j] !=a[i]) {
            j++;
        }

        if (j == n) {
            cout <<"NO\n";
            return;
        }
        

        j++;   
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}