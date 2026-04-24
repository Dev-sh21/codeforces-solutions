#include<iostream>
using ll=long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,L,a;
  cin>>n>>L>>a;

  ll currentTime=0;
  ll totalBreak=0;
  for(int i=0;i<n;i++){
    ll t,l;
    cin>>t>>l;
    ll gap=t-currentTime;
    totalBreak+=(gap/a);
    currentTime=t+l;
  }
  ll finalGap=L-currentTime;
  totalBreak+=(finalGap/a);
  cout<<totalBreak<<endl;
  return 0;

}