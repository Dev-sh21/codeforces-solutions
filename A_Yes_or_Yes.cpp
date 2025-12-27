#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    bool hasTwoN=false;
    int countOfY=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='Y') countOfY++;
      if(i+1<s.size()&& s[i]=='N' &&s[i+1]=='N') hasTwoN=true;
    
    }
    if(countOfY<=1 || hasTwoN) cout<<"YES\n";
    else cout<<"NO\n";

  }
  return 0;
}