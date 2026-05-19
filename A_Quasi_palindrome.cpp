#include<iostream>
#include<string>
using namespace std;
void solve(){
  string s;
  cin>>s;
  int n=s.size();
  int j=n-1;
  while(j>=0 && s[j]=='0') j--;

  int i=0;
  bool isQuasi=true;
  while(i<=j){
    if(s[i]!=s[j]){
      isQuasi=false;
      break;
    }
    i++;
    j--;
  }
  if(isQuasi){
    cout<<"YES\n";
  }
  else cout<<"NO\n";
  
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}