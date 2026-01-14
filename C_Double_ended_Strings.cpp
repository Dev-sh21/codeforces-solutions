#include <iostream>
using namespace std;
using ll=long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string A, B;
        cin >> A >> B; 
        ll n = A.size(), m = B.size();
        ll lcs = 0;

        for (ll len = 1; len <= min(n, m); len++)
        {
            for (ll i = 0; i + len <= n; i++) 
            {
                for (ll j = 0; j + len <= m; j++) 
                {
                    string extract_A = A.substr(i, len); 
                    string extract_B = B.substr(j, len); 
                    
                    if (extract_A == extract_B) 
                        lcs = max(lcs, len);
                }
            }
        }

        ll operations = n + m - 2 * lcs;
        cout << operations << endl;
    }
    return 0;
}

