#include<iostream>
#include<vector>

using ll=long long;
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<ll>arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  ll sum=0;
  ll curr_min_h=arr[0];
  for(int i=0;i<n;i++){
    sum+=arr[i];
    ll curr_avg=sum/(i+1);
    curr_min_h=min(curr_min_h,curr_avg);
    cout<<curr_min_h<<" ";
  }
  cout<<endl;

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