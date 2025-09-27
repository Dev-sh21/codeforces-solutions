#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while (t--) {
        int n, k;
        cin >> n>>k;
        vector<int>a(n);
        for (int i =0; i<n;i++) cin>>a[i];

        vector<bool>present(n+1,false);
        for (int x:a) {
            if (x<=n) present[x] =true;
        }

        if (k==0) {
            cout <<(present[0] ? 1 :0) <<"\n";
            continue;
        }

        bool all_needed =true;
        for (int i=0;i<k;i++) {
            if (!present[i]) {
                all_needed =false;
                break;
            }
        }

        int ops=0;
        if (!all_needed) ops++;
        if (present[k]) ops++;
        cout << ops<<"\n";
    }
    return 0;
}