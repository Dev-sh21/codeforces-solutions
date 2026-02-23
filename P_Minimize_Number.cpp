#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  int count=0;
  while(true){
    bool allEven=true;
    for(int i=0;i<n;i++){
      if(arr[i]%2!=0){
        allEven=false;
        break;
      } 
    }
    if(allEven){
      count++;
      for(int i=0;i<n;i++){
        arr[i]/=2;
      }
    }else break;

  }cout<<count;

}