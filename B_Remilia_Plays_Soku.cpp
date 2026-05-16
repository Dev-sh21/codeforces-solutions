#include<iostream>
#include<cmath>
#include<algorithm>
using ll=long long;
using namespace std;
void solve(){
  ll n,x1,x2,k;
  cin>>n>>x1>>x2>>k;
  if(n<=3){
    cout<<"1\n";
    return;
  }
  ll dist=(abs(x1-x2));
  ll d=min(dist,n-dist);
  cout<<d+k<<endl;
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