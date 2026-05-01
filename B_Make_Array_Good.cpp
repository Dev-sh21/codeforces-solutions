#include<iostream>
#include<vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<n<<endl;
  for(int i=0;i<n;i++){
    int m=arr[i];
    if(m&(m-1)==0) {
      cout<<i+1<<" "<<"0"<<endl;
    }else {
      int p=1;
      while(p<m){
        p<<=1;
      }
      cout<<i+1<<" "<<p-m<<endl;
    }
  }
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