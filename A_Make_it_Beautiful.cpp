#include <iostream>
#include <vector>
#include <algorithm> // For sort and swap

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    sort(arr.rbegin(), arr.rend());

    if (arr[1] == arr[0]) {
        swap(arr[1], arr[n - 1]);
    }

    if (arr[0] == arr[1]) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
       
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}