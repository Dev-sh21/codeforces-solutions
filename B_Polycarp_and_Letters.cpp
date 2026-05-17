#include<iostream>
#include<string>
#include<set>

using namespace std;
void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int max_preeety=0;
  set<char>curr_segment;
  for(int i=0;i<n;i++){
    if(isupper(s[i])){
      max_preeety=max(max_preeety,(int) curr_segment.size());
      curr_segment.clear();

    }else{
      curr_segment.insert(s[i]);
    }
  }
  max_preeety=max(max_preeety,(int) curr_segment.size());
  cout<<max_preeety<<endl;


}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}