#include<iostream>
#include<vector>
using namespace std;
void solve(){
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int incorrect=0;

  for(int i=0;i<n;i++){
    if(k==1){
      incorrect=0;
      break;
    }
    else if((arr[i]-1)%k!=i%k) incorrect++;
  }
  if(incorrect<2) cout<<"0\n";
  else if(incorrect==2) cout<<"1\n";
  else cout<<"-1\n";

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