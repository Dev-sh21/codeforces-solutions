#include<iostream>
using ll=long long;

using namespace std;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b;
    cin>>a>>b;
    ll diff=b%a;
    cout<<a<<" "<<b-diff<<endl;


  }
  return 0;
}

