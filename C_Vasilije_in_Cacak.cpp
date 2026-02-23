#include<iostream>
using namespace std;
using ll=long long;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,k,x;
    cin>>n>>k>>x;
    ll min_sum=(k*(k+1))/2;;
    ll max_sum=(n*(n+1))/2-((n-k)*(n-k+1))/2;
    if(x>=min_sum && x<=max_sum) cout<<"YEs\n";
    else cout<<"NO\n";
  }
  return 0;
}