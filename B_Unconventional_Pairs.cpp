#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        int n;cin>>n;
        vector<long long>v(n);
        for (auto &x:v) cin>>x;

        sort(v.begin(),v.end());

        long long res = 0;
        for (int i=0;i<n;i+= 2) {
            long long diff = abs(v[i+1]-v[i]);
            if (diff>res) res=diff;
        }

        cout <<res<< "\n";
    }

    return 0;
}
