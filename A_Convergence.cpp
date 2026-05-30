#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  sort(arr.begin(),arr.end());
  int m=arr[n/2];
  int l=0,r=0;
  for(int i=0;i<n;i++){
    l+=(arr[i]<m);
    r+=(arr[i]>m);
  }
  cout<<max(l,r)<<endl;
  
 


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
