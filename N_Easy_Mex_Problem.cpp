#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;
const int MOD=1e9+7;
struct tree{
  int n;
  vector<vector<int>>adj;
  vector<int>tin,tout;
  int timer;
  tree(int n):n(n),adj(n+1),tin(n+1),tout(n+1), timer(0){}
  void add_edge(int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  void dfs(int u,int p){
    tin[u]=++timer;
    for(int v:adj[u]){
      if(v!=p) dfs(v,u);
    }
    tout[u]=timer;
  }
  bool is_ancestor(int u,int v){
    return tin[u]<=tin[v]&&tout[u]>=tout[v];
  }
};

void solve(){
  int n;
  cin>>n;
  vector<pair<int ,int>>edges(n-1);
  vector<vector<int>> adj(n+1);
  for(int i=0;i<n-1;i++){
    cin>>edges[i].first>>edges[i].second;
    adj[edges[i].first].push_back(edges[i].second);
    adj[edges[i].second].push_back(edges[i].first);

  }
  if(n==2){
    cout<<2<<"\n";
    return;

  }

}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }



}