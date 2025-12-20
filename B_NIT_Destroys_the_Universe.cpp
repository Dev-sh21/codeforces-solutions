#include <iostream>
using namespace std;
using ll=long long;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    int zeroCount=0;
    for(int i=0;i<n;i++){
      if(arr[i]==0) zeroCount++;
    }
    bool zero_found=false;
    int left=0, right=n-1;
    while(left==0) left++;
    while(right==0) right--;

    for(int i=left;i<right;i++){
      if(arr[i]==0) zero_found=true;
    }

    if(zeroCount==n) cout<<0<<endl;
    else if(zero_found==false) cout<<1<<endl;
    else cout<<2<<endl;


  }

}