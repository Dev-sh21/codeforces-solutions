#include<iostream>
using namespace std;
using ll=long long;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll a=1;
    ll b=n-1;
    for(ll fact=2;fact*fact<=n;fact++){

      if(n%fact==0){
        a=n/fact;
        b=n-a;
        break;
      }
    }
    cout<<a<<" "<<b<<endl;
  }
  return 0;

}