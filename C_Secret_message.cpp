#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n,k;
    cin >>n>>k;
    vector<string>strips(k);
    for (int i=0;i< k; i++) {
        cin >>strips[i];
    }

    vector<vector<int>>col_masks(n,vector<int>(26, 0));
    for (int j=0;j<n;j++) {
        for (int i=0;i<k;i++) {
            col_masks[j][strips[i][j] - 'a'] = 1;
        }
    }

    vector<int> divisors;
    for (int i=1;i*i<=n;i++) {
        if (n%i==0) {
            divisors.push_back(i);
            if (i*i!=n) divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(), divisors.end());

    for (int d : divisors) {
        string res = "";
        bool possible = true;
        for (int i = 0;i<d;i++) {
            int common_mask[26];
            fill(common_mask,common_mask + 26,1);
            
            for (int j = i; j < n; j += d) {
                for (int c = 0; c < 26; ++c) {
                    if (!col_masks[j][c]) common_mask[c] = 0;
                }
            }

            char found =' ';
            for (int c = 0;c<26; c++) {
                if (common_mask[c]) {
                    found = (char)('a' + c);
                    break;
                }
            }

            if (found ==' ') {
                possible =false;
                break;
            } else {
                res +=found;
            }
        }

        if (possible){
            for (int i=0;i< n /d;i++) cout<<res;
            cout <<"\n";
            return;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}