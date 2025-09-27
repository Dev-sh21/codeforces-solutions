#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int length;
    cin >> length;
    vector<int> arr(length);
    vector<int> zero_positions;
    vector<int> missing_numbers;
    vector<bool> is_used(length + 1, false);

    for (int i = 0; i < length; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            zero_positions.push_back(i);
        } else {
            is_used[arr[i]] = true;
        }
    }

    for (int num = 1; num <= length; num++) {
        if (!is_used[num]) {
            missing_numbers.push_back(num);
        }
    }

    sort(missing_numbers.begin(), missing_numbers.end());
    int maximum_cost = 0;
    vector<int> permutation = arr;

    // Fill zeros from back with smallest missing numbers
    for (size_t i = 0; i < zero_positions.size(); i++) {
        permutation[zero_positions[zero_positions.size() - 1 - i]] = missing_numbers[i];
    }

    int left_bound = length, right_bound = -1;
    for (int i = 0; i < length; i++) {
        if (permutation[i] != i + 1) {
            left_bound = min(left_bound, i);
            right_bound = max(right_bound, i);
        }
    }

    if (right_bound >= left_bound) {
        maximum_cost = max(maximum_cost, right_bound - left_bound + 1);
    }

    // Fill zeros from back with largest missing numbers
    for (size_t i = 0; i < zero_positions.size(); i++) {
        permutation[zero_positions[zero_positions.size() - 1 - i]] = missing_numbers[missing_numbers.size() - 1 - i];
    }

    left_bound = length;
    right_bound = -1;
    for (int i = 0; i < length; i++) {
        if (permutation[i] != i + 1) {
            left_bound = min(left_bound, i);
            right_bound = max(right_bound, i);
        }
    }

    if (right_bound >= left_bound) {
        maximum_cost = max(maximum_cost, right_bound - left_bound + 1);
    }

    cout << maximum_cost << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }

    return 0;
}
