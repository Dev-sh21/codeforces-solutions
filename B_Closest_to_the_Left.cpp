#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  while(k--){
    int x;
    cin>>x;
    int low=0,high=n-1, ans=-1;
    while(low<=high){
      int mid=low+(high-low)/2;
      if(arr[mid]<=x){
        ans=mid;
        low=mid+1;
      }
      else{
        high=mid-1;
      }
    }
    cout<<ans+1<<endl;
    
    
  }
  return 0;


}