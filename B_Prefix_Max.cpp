#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
      cin>>arr[i];
    }
    ll max= *max_element(arr.begin(),arr.end());
    cout<<(n*max)<<endl;
    
  }
  return 0;
  
}