#include<iostream>
#include<vector>
using namespace std;
int main(){
  int a,b,c;
  int n=3;

  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int mn=arr[0], mx=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]<mn) mn=arr[i];
    if(arr[i]>mx) mx=arr[i];
  }

 cout<<mn<<" "<<mx<<endl;

}