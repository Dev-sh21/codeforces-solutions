#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    ll total_subarray=0;
      ll current_length=1;
      

    for(int i=1;i<=n;i++){
      if(i<n && arr[i]>=arr[i-1]) current_length++;
      else{
        total_subarray+=(current_length*(current_length+1))/2;
        current_length=1;

      }

      

    }
    cout<<total_subarray<<endl;
  }
}