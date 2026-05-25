#include<iostream>
#include<vector>
#include<set>
#include<string>
using namespace std;
void solve(){
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  vector<int>last_pos(26,-1);
  for(int i=0;i<n;i++){
    last_pos[s[i]-'A']=i;
  }
  set<char>active_door;
  for(int i=0;i<n;i++){
    active_door.insert(s[i]);
    if(active_door.size()>k) {
      cout<<"YES\n";
      return;
    }
    if(last_pos[s[i]-'A']==i) active_door.erase(s[i]);
  }
  cout<<"NO\n";
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;

}