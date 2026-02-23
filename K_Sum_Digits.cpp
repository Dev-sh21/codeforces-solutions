#include<iostream>
using namespace std;
int main(){
  int n;
  string s;
  cin>>n>>s;
  long long ans=0;
  for(int i=0;i<s.length();i++){
    ans+=(s[i]-'0');
    
  }
  cout<<ans<<endl;
  
}