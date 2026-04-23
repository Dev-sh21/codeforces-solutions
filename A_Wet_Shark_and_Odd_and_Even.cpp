#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  vector<long long>arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  sort(arr.begin(),arr.end());
  long long sum=accumulate(arr.begin(),arr.end(),0LL);
  if(sum%2!=0){
    for(int i=0;i<n;i++){
      if(arr[i]%2!=0){
        sum-=arr[i];
        break;
      }
    }
  }
  cout<<sum<<endl;
  return 0;

}