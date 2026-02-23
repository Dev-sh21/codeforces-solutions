#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using ll=long long;
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin >>n;

        vector<ll>a(n);
        for (int i =0; i<n; i++) {
            cin >>a[i];
        }


        vector<ll>suff(n+1, 0);
        for (int i=n-1;i >=0;i--) {
            suff[i] = suff[i+1] +a[i];
        }

        ll answer = -(ll)4e18;

        answer = max(answer, -suff[1]);

        ll absSum=0;
        for (int k =1;k <n;k++) {
            if (k > 1) {
                absSum += llabs(a[k-1]);
            }
            ll value = a[0] + absSum - suff[k + 1];
            answer = max(answer, value);
        }

        
        cout << answer << '\n';
    }

    return 0;
}