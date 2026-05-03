#include<iostream>
using namespace std;
using ll=long long;
void solve(){
  ll a1,a2,a3,a4;
  cin>>a1>>a2>>a3>>a4;
  if(a1==0){
    cout<<1<<endl;
    return ;
  }
  ll total=a1+2*min(a2,a3);
  ll remaining=abs(a2-a3)+a4;
  total+=min(a1+1,remaining);
  cout<<total<<endl;
  

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