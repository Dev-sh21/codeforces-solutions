#include <iostream>
using namespace std;
using ll=long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll w, h;
        cin >> w >> h;
        ll area = INT_MIN;
        for (int i = 0; i < 4; i++)
        {
            ll k;
            cin >> k;
            ll first, last;

            for (int j = 0; j < k; j++) 
            {
                ll x;
                cin >> x;
                if (j == 0)
                    first = x;
                if (j == k - 1)
                    last = x;
            }

            ll base = last - first;
            ll height;
            if (i <= 1)
                height = h;
            else
                height = w;
            
            area = max(area, base * height);
        }
        cout << area << endl;
    }
    return 0;
}

