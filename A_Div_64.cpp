#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin>>s;
  size_t p=s.find('1');
  if(p==string::npos){
    cout<<"no\n";
    return 0;
  }
  if(count(s.begin()+p,s.end(),'0')>=6) cout<<"yes\n";
  else cout<<"no\n";
  return 0;
}