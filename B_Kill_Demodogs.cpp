#include<iostream>
using namespace std;
const long long MOD=1e9+7;
void solve(){
  long long n;
  cin>>n;
  long long ans=n%MOD;
  ans=(ans*(n+1)%MOD)%MOD;
  ans=(ans*(4*n-1)%MOD)%MOD;
  ans=(ans*337)%MOD;
  cout<<ans<<endl;


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