#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)cin >> a[i];

        vector<int>b=a;
        sort(b.begin(), b.end());

        bool sorted=true;
        for (int i=0; i<n; i++) {
            if (a[i]!=b[i]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout <<-1<<"\n";
            continue;
        }

        int low = 1, high=INT_MAX, ans = 1;

        while (low<=high) {
            int mid =low +(high-low)/ 2;

            int min_val=b[0];
            int max_val=b[n-1];
            bool ok=true;

            for (int i=0;i<n;i++) {
                bool locked_a=(abs(a[i]-min_val)<mid) && (abs(a[i]-max_val)< mid);
                bool locked_b =(abs(b[i]-min_val)<mid) && (abs(b[i]-max_val)< mid);

                if ((locked_a||locked_b) && a[i] != b[i]) {
                    ok=false;
                    break;
                }
            }

            if (ok) {
                ans=mid;
                low =mid+1;
            } else {
                high =mid-1;
            }
        }

        cout <<ans<< "\n";
    }

    return 0;
}