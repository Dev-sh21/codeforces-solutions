#include<iostream>
using namespace std;
using ll=long long;
ll ceil(ll a,ll b){
  return (a+(b-1))/b;
}
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x,y,k;
    cin>>x>>y>>k;
    ll stick_gained=x-1;
    ll stick_needed=(k*y)+k-1;
    ll trades=0;
    trades += ceil(stick_needed, stick_gained);
    trades+=k;
    cout<<trades<<endl;
  }
  return 0;

  

}