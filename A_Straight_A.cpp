#include<iostream>
#include<vector>
#include<numeric>

using namespace std;
int main(){
  int n,t;
  cin>>n>>t;
  vector<int>arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  int initial_sum= accumulate(arr.begin(),arr.end(),0);
  cout<<max(0, n*(2*t-1)-2* initial_sum);
  return 0;
}