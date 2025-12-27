#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
using ll=long long;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
      cin>>arr[i];
    }
    ll count_ones=0;
    ll count_zeros=0;
    for(ll i=0;i<n;i++){
      if(arr[i]==1) count_ones++;
      else if(arr[i]==0) count_zeros++;
    }
    ll numberOfWays=pow(2,count_zeros)*count_ones;
    cout<<numberOfWays<<endl;
  }
  return 0;
}