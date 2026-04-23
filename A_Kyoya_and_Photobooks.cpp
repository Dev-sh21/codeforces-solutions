#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin>>s;
  cout<<((s.length()+1)*26-s.length());
  return 0;


}