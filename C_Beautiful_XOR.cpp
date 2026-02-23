#include <iostream>
using namespace std;

int bitLength(long long n) {
    int len = 0;
    while (n) {
        len++;
        n >>= 1;
    }
    return len;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >>a>> b;


        if (a == b) {
            cout<<0 <<"\n";
            continue;
        }


        long long x=a^ b;

        if (x <= a) {
            cout << 1<< "\n" <<x << "\n";
        } 
        else if (b> a) {
            cout <<-1 << "\n";
        } 


        else {
          
            long long mask = (1LL << bitLength(a)) - 1;
            long long a1 = a^ mask;
            long long x2 = (a^ b) ^ mask;

            if (x2 <= a1)
                cout <<2 << "\n" << mask <<" " << x2 << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}