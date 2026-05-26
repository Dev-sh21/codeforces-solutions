#include<iostream>
#include<algorithm>
using ll=long long;
using namespace std;
void solve(){
  ll a,b;
  cin>>a>>b;
  ll ans=1;
  ll mini=min(a,b);
 
  
  for(int i=1;i<=mini;i++){
    ans*=i;
  }
  cout<<ans<<endl;


}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;

}