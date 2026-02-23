#include<iostream>
#include<cmath>
using namespace std;
using ll=long long;

int main(){
  ll a,b;
  cin>>a>>b;
  cout<<"floor "<<a<<" / "<<b<<" = "<< (a/b)<<endl;
  cout<<"ceil "<<a<<" / "<<b<<" = "<< (a+(b-1))/b<<endl;
  cout<<"round "<<a<<" / "<<b<<" = "<<(a+b/2)/b<<endl;
  

}