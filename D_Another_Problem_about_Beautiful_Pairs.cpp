#include <iostream>
#include <vector>
#include <cmath>
using ll=long long;

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n+1);
    for (int i =1;i <=n; i++) {
        cin >>a[i];
    }

    ll count = 0;
    int limit = sqrt(n)+1; 

    for (int x=1; x <=limit; x++) {
        for (int j=1; j<= n;++j) {
            if (a[j]>=x) {
                ll dist=1LL*a[j] * x;
                if (dist<j) { 
                    int i = j-(int)dist;
                    if (a[i]==x) {
                        count++;
                        
                    }

                }
            }


        }
        for (int i = 1; i<= n; i++) {
            if (a[i] >x) {
                ll dist =1LL * a[i]*x;
                if (i + dist <= n) { 
                    int j = i+(int)dist;
                    if (a[j] ==x) {
                        count++;


                    }
                }

            }
        }


    }

    cout << count << endl;
}

int main() {   
    int t;
    cin >>t;
    while (t--) {
        solve();
    }
    return 0;
}