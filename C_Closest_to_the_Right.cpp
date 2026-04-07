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
      if(arr[mid]>=x){
        ans=mid;
        high=mid-1;
      }
      else{
        low=mid+1;
      }
    }
    if(ans==-1) cout<<n+1<<endl;
    else cout<<ans+1<<endl;

    
    
  }
  return 0;


}