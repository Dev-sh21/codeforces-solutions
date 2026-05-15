#include<iostream>
using namespace std;
using ll=long long;


void solve(){
  ll a,b;
  cin>>a>>b;
  if(b-a>=5) cout<<0<<endl;
  else {
    ll res=1;
    for(ll i=a+1;i<=b;i++){
      res=(res*(i%10))%10;
    }
    cout<<res<<endl;
  }
  
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}