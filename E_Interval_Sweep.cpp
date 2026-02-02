#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  if(abs(b-a)<=1 && (a+b)>0) cout<<"YES\n";
  else cout<<"NO\n";
}