#include<iostream>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int res=(n+1)/2;
  cout<<res<<endl;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}