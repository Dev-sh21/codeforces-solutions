#include<iostream>
using ll=long long;

using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll a,b;
  cin>>a>>b;
  ll sum=0;
  while(b>0){
    sum+=(a/b);
    ll temp=a%b;
    a=b;
    b=temp;

  }
  cout<<sum<<endl;
  return 0;


}