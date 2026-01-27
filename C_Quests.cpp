#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
using ll=long long;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    vector<ll>b(n);
    for(ll i=0;i<n;i++) cin>>b[i];

    ll sum=0;
    ll maxOf_i=0;
    ll ans=0;

    for(ll i=0; i<min(n,k);i++){
      sum+=a[i];
      maxOf_i=max(maxOf_i, b[i]);
      ans=max(ans,sum+(k-(i+1))*maxOf_i);
    }
    cout<<ans<<endl;


  }
  return 0;

}
