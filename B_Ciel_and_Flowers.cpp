#include<iostream>
#include<algorithm>
using namespace std;
using ll=long long;
int main(){
  ll r,g,b;
  cin>>r>>g>>b;
  ll ans=0;
  for(ll i=0;i<=2;i++){
   if(r>=i && g>=i && b>=i) {
    ll current=i;
    current+=(r-i)/3;
    current+=(g-i)/3;
    current+=(b-i)/3;
    ans=max(ans,current);}
  }
  cout<<ans<<endl;
  return 0;
  
  



}