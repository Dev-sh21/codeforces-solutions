#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void solve(){
  long long n;
  cin>>n;
  vector<long long>arr(n);
  for(long long i=0;i<n;i++){
    cin>>arr[i];
  }
  long long s1=0,s2=0,diff=0;
  for(long long i=0;i<n;i++){
    if(arr[i]>=0) s1+=arr[i];
    else {
      s2+=arr[i];
      diff=abs(s2);

    }
  }
  cout<<abs(diff-s1)<<endl;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;

}