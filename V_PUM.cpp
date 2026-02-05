#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int current = 1;
    for (int i = 0; i < N; ++i) {
        cout << current << " " << current + 1 << " " << current + 2 << " PUM" << endl;
        current += 4;
    }

    return 0;
}