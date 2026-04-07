#include<iostream>
using namespace std;
using ll=long long;
int main(){

  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n-1;i++){
      cin>>a[i];
    }
    ll sum=0;
    for(int i=0;i<n-1;i++){
      sum+=a[i];
    }
    cout<<-1*sum<<endl;

  }
  return 0;
}