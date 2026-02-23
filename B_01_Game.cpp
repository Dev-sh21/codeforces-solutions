#include<iostream>

using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int countZero=0;
    int countOne=0;
    for(int i=0;i<s.length();i++){
      if(s[i]=='0') countZero++;
      else countOne++;

    }

    int operations=min(countZero, countOne);
    if(operations%2!=0) cout<<"DA\n";
    else cout<<"NET\n";
  }
  return 0;
}