#include<iostream>
using namespace std;
using ll=long long;
int main(){
  ll x;
  cin>>x;
  ll first_digit=x/1000;
  if(first_digit%2==0) cout<<"EVEN\n";
  else cout<<"ODD\n";


}
