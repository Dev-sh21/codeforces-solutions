#include <iostream>
#include <algorithm>
int gcd(int a,int b){
  return b? gcd(b,a%b):a;
}

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    cout << gcd(A, B) << endl;
    return 0;
}