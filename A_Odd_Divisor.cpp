#include<iostream>
using namespace std;
using ll=long long;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    while(n%2==0) n/=2;
    if(n>1)cout<<"YES\n";
    else cout<<"NO\n";
  }
  return 0;
}