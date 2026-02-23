#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    if (cin >> t){
     while (t--) {
    int n;
    cin >>n;
    string x;
    cin >>x;
    bool possible =true;

    if (n % 2!=0) {
        if (x[0]=='b') {
            possible=false;
        }
        for (int i = 1;i<n;i+=2) {
            if (x[i]!='?' && x[i+1]!= '?' && x[i]==x[i+1]) {
                possible=false;
                break;
            }
        }
    } else {
        for (int i=0; i<n; i+= 2) {
            if (x[i] !='?' && x[i+1] != '?' && x[i]== x[i+1]) {
                possible =false;
                break;
            }
        }
    }

    if (possible) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
        }
    }
    return 0;
}