#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
using ll=long long;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,s,x;
    cin>>n>>s>>x;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    ll sum=accumulate(arr.begin(), arr.end(),0);

    if(sum<=s && (s-sum)%x==0) cout<<"YES\n";
    else cout<<"NO\n";
  }

}