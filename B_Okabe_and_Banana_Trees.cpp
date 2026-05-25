#include<iostream>
using namespace std;
using ll=long long;
void solve(){
  ll m,b;
  cin>>m>>b;
  ll max_banana=0;
  for(ll y=b;y>=0;y--){
    ll x=m*(b-y);
    ll curr_bana=(x+1)*(y+1)*(x+y)/2;
    max_banana=max(max_banana,curr_bana);


  }
  cout<<max_banana<<endl;

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}