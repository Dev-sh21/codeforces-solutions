#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  string s;
  cin>>s;
  int bad_pair=0;
  for(int i=0;i<s.length()-1;i++){
    if(s[i]==s[i+1]) bad_pair++;


  }
  if(bad_pair<=2) cout<<"YES\n";
  else cout<<"NO\n";}
}
