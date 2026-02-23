#include<iostream>
#include<vector>
using namespace std;
int main(){
  char c;
  cin >>c;
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<arr[i];j++){
      cout<<c;
    }
    cout<<endl;
  }

}