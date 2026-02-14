#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  int min_index=0;
  int max_index=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<arr[min_index]) min_index=i;
    if(arr[i]>arr[max_index]) max_index=i;

  }
  swap(arr[min_index],arr[max_index]);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
   
}