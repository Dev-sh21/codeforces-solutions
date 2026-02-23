#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll=long long;
int main(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  ll min_value=*min_element(arr.begin(),arr.end());
  ll freq=count(arr.begin(),arr.end(),min_value);
  if(freq%2==1) cout<<"Lucky\n";
  else cout<<"Unlucky\n";




}