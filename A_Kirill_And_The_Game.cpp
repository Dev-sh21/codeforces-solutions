#include<iostream>
using ll=long long;
using namespace std;
void solve(){
   ll l,r,x,y,k;
  cin>>l>>r>>x>>y>>k;
  for(ll b=x;b<=y;b++){
    ll a=b*k;
    if(a>=l && a<=r){
      cout<<"YES\n";
      return ;

    }
    
  }
  cout<<"NO\n";
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
 

}