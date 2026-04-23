#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n==1) cout<<"2\n";
    else{
    int ans=(2+n)/3;
    cout<<ans<<endl;}
  }
  return 0;
}