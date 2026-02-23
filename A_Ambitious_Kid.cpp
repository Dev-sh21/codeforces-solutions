#include<iostream>
using ll =long long;
using namespace std;
int main(){
  ll n;
  cin>>n;
  ll a[n];
  
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  ll min_op=INT_MAX;
  for(int i=0;i<n;i++){
    min_op=min(min_op,abs(a[i]));
  }
  cout<<min_op;
  return 0;
  
}