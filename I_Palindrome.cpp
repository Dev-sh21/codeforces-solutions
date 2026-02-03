#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    string str;
    cin >> str;

    string rev = str;
    reverse(rev.begin(), rev.end());
    size_t first=rev.find_first_not_of('0');
    
    string reversed_no_zeros;
    if (string::npos == first) {
        reversed_no_zeros = "0"; 
    } else {
        reversed_no_zeros = rev.substr(first);
    }

  
    cout << reversed_no_zeros << endl;

   
    if (str == rev) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}