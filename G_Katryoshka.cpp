#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n,m,k;
    cin>>n>>m>>k;

   
    long long res = min({n,m,k});
    n -= res;
    k -= res;

   
    res += min(n/2,k);

    cout << res<< endl;
    return 0;
}