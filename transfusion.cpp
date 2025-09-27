#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool isPossible(vector<int>& arr) {
    vector<long long> odd, even;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) odd.push_back(arr[i]);
        else even.push_back(arr[i]);
    }
    if (odd.size() == 0 || even.size() == 0) return false;
    long long odd_sum = accumulate(odd.begin(), odd.end(), 0LL);
    long long even_sum = accumulate(even.begin(), even.end(), 0LL);

    if (odd_sum % odd.size() != 0) return false;
    if (even_sum % even.size() != 0) return false;
    if (odd_sum / odd.size() != even_sum / even.size()) return false;
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) cin >> arr[i];
        if (isPossible(arr))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
