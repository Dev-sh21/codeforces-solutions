#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <cmath>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

using ll = long long;
const ll MODULO = 676767677LL;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << "\n"
#else
#define debug(x)
#endif

ll computeSequences(int n,const vector<int>& arr) {
    vector<int> diff(n+1);
    for (int i = 1;i<=n;++i) 
        diff[i]=i-arr[i];

    set<int>candidates;
    int c1=-diff[1];
    int c2=1-diff[1];
    if (0<=c1&&c1<=n) candidates.insert(c1);
    if (0<=c2&&c2<=n) candidates.insert(c2);

    ll totalCount=0;
    for (int candidate:candidates) {
        int prevB=0;
        bool valid=true;
        int sumX=0;
        for (int i=1;i<=n;++i) {
            int currentC=candidate +diff[i];
            int x = currentC- 2*prevB;
            if (x != 0&& x!=1) {
                valid=false;
                break;
            }
            prevB +=x;
            sumX +=x;
            if (prevB <0|| prevB >i) {
                valid =false;
                break;
            }
        }
        if (!valid) continue;
        if (prevB !=candidate)continue;
        totalCount = (totalCount + 1) % MODULO;
    }
    return totalCount;
}

void solve() {
    int T; 
    if(!(cin >> T))return;
    while (T--) {
        int n; cin >>n;
        vector<int>inputArr(n+1);
        for (int i = 1;i<= n; ++i)cin >>inputArr[i];

        ll result = computeSequences(n,inputArr);
        cout << result << '\n';
    }
}

int main() {
    fastio;
    solve();
    return 0;
}
