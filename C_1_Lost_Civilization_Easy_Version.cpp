#include <iostream>
using namespace std;
int main() {   
    int t;
    if (cin >>t) {
        while (t--) {
            int n;
    cin >> n;
    
    int ans=0;
    int r =-1,c=-1;
    
    for (int i=0;i<n;i++) {
        int x;
        cin >>x;
        if (r !=-1 && r <x && x<= c+1) {
            c =x;
        } else {
            ans++;
            r=x;
            c=x;
        }
    }
    cout <<ans<<"\n";
        }
    }
    return 0;
}