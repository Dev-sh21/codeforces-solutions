#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  long long ans=(1LL* n*n)+(1LL*(n-1)*(n-1));
  cout<<ans<<endl;
  return 0;
}