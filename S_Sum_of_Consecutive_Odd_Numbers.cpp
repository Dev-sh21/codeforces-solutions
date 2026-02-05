#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int start=min(n,m);
    int end=max(n,m);
    long long sum=0;
    for (int i = start + 1; i < end; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        cout << sum << endl;
  }
}
