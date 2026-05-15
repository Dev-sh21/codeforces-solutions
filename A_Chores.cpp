#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,k,x;
  cin>>n>>k>>x;
  int time=0;
  vector<int>arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  for(int i=0;i<n-k;i++){
    time+=arr[i];
  }
  cout<<time+(x*k)<<endl;
  return 0;
  
}