#include<iostream>
#include<cmath>
using namespace std;
using ll=long long;

int main(){
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  double first=b*log(a);
  double second=d*log(c);
  if(first>second) cout<<"YES\n";
  else cout<<"NO\n";

}