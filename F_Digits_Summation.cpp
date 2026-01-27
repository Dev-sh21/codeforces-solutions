#include<iostream>
using namespace std;
using ll=long long;
int main(){
  string m,n;
  cin>>m>>n;
  ll f_last=m[m.length()-1]-'0';
  ll s_last=n[n.length()-1]-'0';
  cout<<(f_last+s_last)<<endl;

}