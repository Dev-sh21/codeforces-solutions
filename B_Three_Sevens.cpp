#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
  int m;
  cin>>m;
  vector<vector<int>>days(m);
  for(int i=0;i<m;i++){
    int n;
    cin>>n;
    days[i].resize(n);
    for(int j=0;j<n;j++) cin>>days[i][j];

  }

  vector<int>winners(m);
  vector<bool>visited(500005,false);
  bool possible=true;

  for(int i=m-1;i>=0;i--){
    int winner=-1;
    for(int p:days[i]){
      if(!visited[p]) winner=p;
      visited[p]=true;
    }
    if(winner==-1){
      possible=false;
      break;
    }
    winners[i]=winner;
  }
  if(!possible) cout<<"-1\n";
  else{
    for(int i=0;i<m;i++){
      cout<<winners[i]<<(i==m-1?"":" ");
    }
    cout<<endl;
  }

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