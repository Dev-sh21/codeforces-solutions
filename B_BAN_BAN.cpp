#include<iostream>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int m=(n+1)/2;
  cout<<m<<endl;
  int left=2;
  int right=3*n;
  while(left<right){
    cout<<left<<" "<< right<<endl;
    left+=3;
    right=right-3;
  }


}
int main(){
  ios_base::sync_with_stdio(NULL);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}