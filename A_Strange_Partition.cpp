#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long min_groups = 0;
        long long max_groups = 0;

        for (int i = 0; i < n; i++)
        {
            max_groups += (a[i] + x - 1) / x;
            min_groups += a[i];
        }

        min_groups = (min_groups + x - 1) / x;

        cout << min_groups << " " << max_groups << endl;
    }
    return 0;
}