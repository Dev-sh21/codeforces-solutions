#include<iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());

  int k;
  cin>>k;
  while(k--){
    int l,r;
    cin>>l>>r;
    int left=lower_bound(arr.begin(),arr.end(),l)-arr.begin();
    int right=upper_bound(arr.begin(),arr.end(),r)-arr.begin();
    int count=right-left;
    cout<<count<<" ";

    
    
  }

  
}