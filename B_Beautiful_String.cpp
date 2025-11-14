#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindrome(const string& s) {
    int n = s.size();
    for(int i = 0; i< n/2; ++i) {
        if(s[i] != s[n-1-i]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin>> n;
        string s;
        cin >> s;
        vector<int> p_indices;
        vector<int> ones;
        for (int i = 0;i < n; ++i)
            if (s[i] == '1') ones.push_back(i);

        string x_zeros = "";
        for (int i= 0; i< n;++i)
            if (s[i] =='0') x_zeros +='0';


        if (x_zeros =="" || is_palindrome(x_zeros)) {
            cout << ones.size() << endl;
            for (int i = 0; i < ones.size(); ++i)
                cout << ones[i] + 1 << " ";
            cout << endl;
            continue;
        }
        vector<int> zeros;
        for (int i =0; i< n; ++i)
            if (s[i] =='0') zeros.push_back(i);

        string x_ones = "";
        for (int i = 0; i < n; ++i)
            if (s[i] == '1') x_ones += '1';
        if (x_ones == ""|| is_palindrome(x_ones)) {
            cout << zeros.size()<< endl;
            for (int i = 0;i < zeros.size(); ++i)
                cout << zeros[i]+ 1 << " ";
            cout << endl;
            continue;
        }



        
        cout << -1 << endl;
    }
    return 0;
}
