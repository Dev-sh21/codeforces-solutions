#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        double max_avg = 0;

        for (int l =0; l< n; l++) {
            int sum =0;
            for (int r = l;r < n; r++) {
                sum += a[r];
                int len= r - l + 1;
                double avg = (double)sum / len;
                if (avg > max_avg) max_avg = avg;
            }
        }
        cout << (int)max_avg << endl;
    }
    return 0;
}
