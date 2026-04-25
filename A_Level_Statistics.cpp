#include<iostream>
#include<vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int prev_p=0,prev_c=0;
  bool possible=true;
  for(int i=0;i<n;i++){
    int p,c;
    cin>>p>>c;

    if(p<prev_p || c < prev_c) possible =false;
    if(c>p) possible= false;
    if((c-prev_c)>(p-prev_p)) possible=false;
    prev_p=p;
    prev_c=c;


  }
  if(possible) cout<<"YES\n";
  else cout<<"NO\n";

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
