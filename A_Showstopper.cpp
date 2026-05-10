#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int>arr1(n);
  for(int i=0;i<n;i++) cin>>arr1[i];
  vector<int>arr2(n);
  for(int i=0;i<n;i++) cin>>arr2[i];

  for(int i=0;i<n;i++){
    if(arr1[i]>arr2[i]) {
      swap(arr1[i],arr2[i]);
    }
  }
  if(arr1[n-1]== *max_element(arr1.begin(),arr1.end()) && arr2[n-1]== *max_element(arr2.begin(),arr2.end())){
    cout<<"YES\n";

  }else cout<<"NO\n";

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