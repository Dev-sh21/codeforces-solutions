#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int width = (x2 - x1 + 1);
        int height = (y2 - y1 + 1);
        
        totalSum += (width * height);
    }

    cout << totalSum << endl;

    return 0;
}