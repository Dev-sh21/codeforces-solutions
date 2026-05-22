#include<iostream>
#include<vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  if(n%2!=0 && arr[0]%2!=0 && arr[n-1]%2!=0) cout<<"Yes\n";
  else cout<<"N0\n";
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;


}