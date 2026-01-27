#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t ;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];

    }
    ll l=-1;
    for(int i=0;i<n;i++){
      if(arr[i]!=n-i){
        l=i;break;
      }
    }

    if(l==-1){
      for(ll x:arr){
        cout<<x<<" ";   
      }cout<<endl;
      
        continue;
    }

    ll target =n-l;
    ll r=l;
    while(arr[r]!=target) r++;
    reverse(arr.begin()+l, arr.begin()+r+1 );
    for(int x:arr){
      cout<<x<<" ";
      
    }cout<<endl;
    
  }
  return 0;


}